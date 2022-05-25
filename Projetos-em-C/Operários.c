#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(){

setlocale(0,"portuguese");

int i, n, prontuario, prontuarioMaior;
char sexo;
float salarioMin=1100, maiorSalario=0, salario, qnt, salarioTotal, mediaH, mediaM, qntH, qntM, qntTotal, funcionariosH, funcionariosM;

funcionariosH=funcionariosM=qntTotal=salarioTotal=qntH=qntM=0;

printf("Insira no número de funcionários.\n");
scanf("%i", &n);
fflush(stdin);


for(i=1;i<=n;i++)
{

        //Prontuário
        printf("Insira o prontuário do %iº funcionário.\n",i);
        scanf("%i", &prontuario);
        fflush(stdin);

        //Sexo
        printf("Insira o sexo do %iº funcionário (M/F).\n", i);
        scanf("%c", &sexo);
        sexo=toupper(sexo);
        fflush(stdin);
            //Validação
        while(sexo != 'M' && sexo != 'F'){
            printf("Valor inválido, por favor insira novamente\n");
            scanf("%c", &sexo);
            sexo=toupper(sexo);
            fflush(stdin);
        }



        //Quantidade de peças
        printf("Insira a quantidade de peças que o %iº funcionário fabricou.\n", i);
        scanf("%f", &qnt);
        fflush(stdin);

//-Cálculos-//

        //Contador de homens e mulheres + peças produzidas por eles
        if(sexo=='M'){
            qntH=qntH+qnt;
            funcionariosH++;
        }
        else{
            qntM=qntM+qnt;
            funcionariosM++;
        }

        //Quantidade total de peças
        qntTotal=qntTotal+qnt;



        //Cálculo do salário baseado na quantidade de peças produzidas
        if (qnt<=30){
            salario=salarioMin;
        }else if (qnt<=35){
            salario=salarioMin*(1+((qnt-30)*0.03));
        }else{
            salario=salarioMin*(1+((qnt-35)*0.05));
        }

        //Prontuário do maior salário
        if (salario>maiorSalario){
            prontuarioMaior=prontuario;
        }

        //Salário total
        salarioTotal=salarioTotal+salario;

        //Exibição dos dados individuais
        printf("\n Prontuário do %i° funcionário: %i", i, prontuario);
        printf("\n Salário do %iº funcionário: R$%.2f \n\n", i, salario);

}

//Cálculos finais//


    //Médias
    mediaH=qntH/funcionariosH;
    mediaM=qntM/funcionariosM;


//Exibição dos dados finais

    printf("\nTotal da folha de pagamanto desse mês: R$%.2f", salarioTotal);
    printf("\nNúmero de peças fabricadas nesse mês: %.0f", qntTotal);

    //Validação Homens e Mulheres
    if(qntH>0){
        printf("\nMédia de peças fabricadas pelos homens: %.2f", mediaH);
    }
    if(qntM>0){
        printf("\nMédia de peças fabricadas pelas mulheres: %.2f", mediaM);
    }

    //
    printf("\nProntuário do funcionário com maior salário: %i", prontuarioMaior);




}
