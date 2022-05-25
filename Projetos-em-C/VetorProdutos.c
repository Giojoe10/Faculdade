w#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(0,"portuguese");

    char nome[3][20];
    float quantidade[3], valorUnit[3], valorTotal, totalGeral;
    int i;
    totalGeral=0;

    for (i=0;i<3;i++)
    {
        printf("Insira o nome do %iº produto\n", i+1);
        fgets(nome[i],20,stdin);
        printf("Insira o valor do %iº produto\n", i+1);
        scanf("%f", &valorUnit[i]);
        fflush(stdin);
        printf("Insira a quantidade do %iº produto\n", i+1);
        scanf("%f", &quantidade[i]);
        fflush(stdin);
    }


printf("\nNome\tQuantidade\tValor Unitário\tTotal\n");

for(i=0;i<3;i++)
{
    valorTotal = valorUnit[i]*quantidade[i];
    totalGeral+= valorTotal;
    printf("%s\t", nome[i]);
    printf("%.0f\t\t", quantidade[i]);
    printf("R$%.2f\t\t", valorUnit[i]);
    printf("R$%.2f\n", valorTotal);



}

printf("Total Geral:\t\t\t\tR$%.2f", totalGeral);



}

