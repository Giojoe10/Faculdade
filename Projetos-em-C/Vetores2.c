#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que identifique, dentre um conjunto de n�meros, os n�meros pares
int main(){

setlocale(0,"portuguese");
int nr[10], i, k, par[10];
k=0;

//Entrada de dados
for(i=0;i<10;i++)
{
    printf("\nEntrando com o n�mero e armazendando em %d\n", i+1);
    scanf("%d",&nr[i]);

}
//Processamento
printf("\nOs valores pares s�o:");
for(i=0;i<10;i++)
{
    if(nr[i] %2 == 0)
    {
        k++;
        par[k]=nr[i]; //Criando um vetor de processamento

    }

//Sa�da


}
for(i=1;i<=k;i++)
{
    printf("\n%d",par[i]);
}

}
