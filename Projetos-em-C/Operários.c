#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(){

setlocale(0,"portuguese");

int i, n, prontuario, prontuarioMaior;
char sexo;
float salarioMin=1100, maiorSalario=0, salario, qnt, salarioTotal, mediaH, mediaM, qntH, qntM, qntTotal, funcionariosH, funcionariosM;

funcionariosH=funcionariosM=qntTotal=salarioTotal=qntH=qntM=0;

printf("Insira no n�mero de funcion�rios.\n");
scanf("%i", &n);
fflush(stdin);


for(i=1;i<=n;i++)
{

        //Prontu�rio
        printf("Insira o prontu�rio do %i� funcion�rio.\n",i);
        scanf("%i", &prontuario);
        fflush(stdin);

        //Sexo
        printf("Insira o sexo do %i� funcion�rio (M/F).\n", i);
        scanf("%c", &sexo);
        sexo=toupper(sexo);
        fflush(stdin);
            //Valida��o
        while(sexo != 'M' && sexo != 'F'){
            printf("Valor inv�lido, por favor insira novamente\n");
            scanf("%c", &sexo);
            sexo=toupper(sexo);
            fflush(stdin);
        }



        //Quantidade de pe�as
        printf("Insira a quantidade de pe�as que o %i� funcion�rio fabricou.\n", i);
        scanf("%f", &qnt);
        fflush(stdin);

//-C�lculos-//

        //Contador de homens e mulheres + pe�as produzidas por eles
        if(sexo=='M'){
            qntH=qntH+qnt;
            funcionariosH++;
        }
        else{
            qntM=qntM+qnt;
            funcionariosM++;
        }

        //Quantidade total de pe�as
        qntTotal=qntTotal+qnt;



        //C�lculo do sal�rio baseado na quantidade de pe�as produzidas
        if (qnt<=30){
            salario=salarioMin;
        }else if (qnt<=35){
            salario=salarioMin*(1+((qnt-30)*0.03));
        }else{
            salario=salarioMin*(1+((qnt-35)*0.05));
        }

        //Prontu�rio do maior sal�rio
        if (salario>maiorSalario){
            prontuarioMaior=prontuario;
        }

        //Sal�rio total
        salarioTotal=salarioTotal+salario;

        //Exibi��o dos dados individuais
        printf("\n Prontu�rio do %i� funcion�rio: %i", i, prontuario);
        printf("\n Sal�rio do %i� funcion�rio: R$%.2f \n\n", i, salario);

}

//C�lculos finais//


    //M�dias
    mediaH=qntH/funcionariosH;
    mediaM=qntM/funcionariosM;


//Exibi��o dos dados finais

    printf("\nTotal da folha de pagamanto desse m�s: R$%.2f", salarioTotal);
    printf("\nN�mero de pe�as fabricadas nesse m�s: %.0f", qntTotal);

    //Valida��o Homens e Mulheres
    if(qntH>0){
        printf("\nM�dia de pe�as fabricadas pelos homens: %.2f", mediaH);
    }
    if(qntM>0){
        printf("\nM�dia de pe�as fabricadas pelas mulheres: %.2f", mediaM);
    }

    //
    printf("\nProntu�rio do funcion�rio com maior sal�rio: %i", prontuarioMaior);




}
