#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0,"portuguese");

int quantidade[5];
float valor[5];
char vendedor[5][15];
char produto[5][15];
int i;
float total, tg;
total=tg=0;

for (i=0;i<5;i++){

    printf("Informe a quantidade de produtos\n");
    scanf("%d", &quantidade[i]);
    fflush(stdin);

    printf("Informe o valor unitário do produto\n");
    scanf("%f", &valor[i]);
    fflush(stdin);

    printf("Informe o nome do vendedor\n");
    fgets(vendedor[i],15,stdin);
    fflush(stdin);

    printf("Informe o produto \n");
    fgets(produto[i],15, stdin);
    fflush(stdin);

}
//Cabeçalho de Relatório
printf("\n ----------------------------------------------------------------");
printf("\n Vendedor \t\t Produto \t\t Valor \t\t Quantidade \t\t Total");
printf("\n ----------------------------------------------------------------");

for (i=0;i<5;i++){

    total=valor[i]*quantidade[i];
    tg+=total;

//Linha Detalhes
    printf("\n %s \t\t %s \t\t\t\t %.2f \t %d \t\t %.2f",vendedor[i],produto[i],valor[i],quantidade[i],total);

}

printf("\n ----------------------------------------------------------------");
printf("Total Geral da Compra ===> %.2f",tg);
printf("\n ----------------------------------------------------------------");

}
