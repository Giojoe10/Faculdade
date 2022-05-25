#include <stdio.h>
#include <locale.h>
#define MAX 2
int main(){
setlocale(0,"portuguese");
int i;
float vendas[MAX], percentualComissao[MAX],comissao[MAX], maior, menor, totalVendas;
char vendedores[MAX][20];
maior=totalVendas=0;
menor=99999;
for (i=0;i<MAX;i++)
{
    printf("Insira o nome do %i° vendedor\n", i+1);
    fgets(vendedores[i],20,stdin);
    fflush(stdin);

    printf("Insira o valor de vendas desse vendedor\n");
    scanf("%f", &vendas[i]);
    fflush(stdin);

    printf("Insira o valor da comissão desse vendedor (em porcentagem)\n");
    scanf("%f", &percentualComissao[i]);
    fflush(stdin);
    printf("\n");
    //printf("--------------------------------------------------\n");

    comissao[i]=(percentualComissao[i]/100)*vendas[i];

    totalVendas+=vendas[i];

    if (comissao[i]>maior)
    {
        maior=comissao[i];
    }
    if (comissao[i]<menor)
    {
        menor=comissao[i];
    }
}

printf("\n\n--------------------------------------------------\n");
printf("Vendedor\t\tValor A Receber\n");

for(i=0;i<MAX;i++)
{
    printf("%s\t\t\tR$%.2f\n", vendedores[i], comissao[i]);
}
printf("--------------------------------------------------\n");
printf("TOTAL DE VENDAS: R$%.2f\n", totalVendas);
printf("MAIOR VALOR A RECEBER: R$%.2f\n", maior);
printf("MENOR VALOR A RECEBER: R$%.2f\n", menor);
printf("--------------------------------------------------");
}
