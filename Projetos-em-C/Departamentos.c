#include <stdio.h>
#include <locale.h>

int main(){

setlocale(0,"portuguese");
int i, departamento, maiorDepartamento, menorDepartamento;
float n, salario, maiorSalario=0, menorSalario=0, reajuste, porcentagem=0, salarioFinal;

printf("Insira o número de funcionários\n");
scanf("%f", &n);

for(i=1;i<=n;i++){

    printf("Insira o salário do %iº funcionário\n", i);
    scanf("%f", &salario);
    printf("De qual departamento este funcionário faz parte?([1][2][3])\n");
    scanf("%i", &departamento);
    while (departamento!=1 && departamento!=2 && departamento!=3){
        printf("Departamento inválido, insira novamento\n");
        scanf("%i", &departamento);
    }


    if (departamento==1){
        reajuste=1.1;
    }
    else if(departamento==2){
        reajuste=1.15;

    }
    else if(departamento==3){
        reajuste=1.7;

    }

    printf("REAJUSTE %.1f\n", reajuste);
    salarioFinal=salario*reajuste;

    printf("Salário do %iº funcionário: R$%.2f\n", i, salario);
    printf("Salário do %iº funcionário APÓS REAJUSTE: R$%.2f\n", i, salarioFinal);

    if (departamento!=3){
        if (salarioFinal>maiorSalario){
            maiorSalario=salarioFinal;
            maiorDepartamento=departamento;
        }

        if(menorSalario==0){
            menorSalario=salarioFinal;
            menorDepartamento=departamento;
        }
        else if(salarioFinal<menorSalario){
            menorSalario=salarioFinal;
            menorDepartamento=departamento;
        }
    }

    if (salario<1120){
        porcentagem++;
    }

}

porcentagem = 100* (porcentagem/n);
printf("Maior Salário: R$%.2f (Departamento %i)\n", maiorSalario, maiorDepartamento);
printf("Menor Salário: R$%.2f (Departamento %i)\n", menorSalario, menorDepartamento);
printf("Porcentagem de funcionários com salário acima de R$1120,00: %.2f", porcentagem);

}
