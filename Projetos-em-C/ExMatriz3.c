#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(0,"portuguese");


    int i,j;
    char vendedores[5][20];
    float vendas[5][4];
    float totalSemanas[4]= {0};
    float totalVendedor[5]= {0};
    float totalMes;
    totalMes=0;



    for(i=0; i<5; i++)
    {
        printf("Insira o nome do %dº vendedor\n",i+1);
        fgets(vendedores[i],20,stdin);
        fflush(stdin);

        for (j=0; j<4; j++)
        {
            printf("Insira as vendas da semana %d desse vendendor\n",j+1);
            scanf("%f", &vendas[i][j]);
            fflush(stdin);
            totalVendedor[i]+=vendas[i][j];
            totalSemanas[j]+=vendas[i][j];

        }

    totalMes+=totalVendedor[i];
    printf("\nTOTAL MES = %.2f\n",totalMes);
    }
    printf("---------------------------------------------------\n");
    printf("Vendedores\t\tSemana 1\t\tSemana 2\t\tSemana 3\t\tSemana 4\t\tTotal");

    for(i=0; i<5; i++)
    {
        printf("\n%s\t\t\t",vendedores[i]);
        for (j=0; j<4; j++)
        {
            printf("%.2f\t\t\t", vendas[i][j]);
        }
        printf("%.2f", totalVendedor[i]);
    }

    printf("\nTotal\t\t\t");
    for (i=0; i<4; i++)
    {
        printf("%.2f\t\t\t", totalSemanas[i]);
    }
    printf("\n\nTotal Geral: %.2f", totalMes);

}

