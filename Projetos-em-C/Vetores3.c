#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(0,"portuguese");

    char nome[10][20];
    int i, tam;

    for(i=0; i<10; i++)
    {

        printf("\nEntre com o %dº nome\n", i+1);
        fgets(nome[i],20,stdin);

    }

    for(i=0; i<10; i++)
    {
        tam = strlen(nome[i]);
        printf("\n O tamanho do nome %s é %d", nome[i], tam-1);

    }


}
