#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que identifique, dentre um conjunto de números, os números pares
int main(){

setlocale(0,"portuguese");
int nr[10], i, k, par[10];
k=0;

//Entrada de dados
for(i=0;i<10;i++)
{
    printf("\nEntrando com o número e armazendando em %d\n", i+1);
    scanf("%d",&nr[i]);

}
//Processamento
printf("\nOs valores pares são:");
for(i=0;i<10;i++)
{
    if(nr[i] %2 == 0)
    {
        k++;
        par[k]=nr[i]; //Criando um vetor de processamento

    }

//Saída


}
for(i=1;i<=k;i++)
{
    printf("\n%d",par[i]);
}

}
