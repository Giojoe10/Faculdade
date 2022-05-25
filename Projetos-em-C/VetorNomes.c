#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(0,"portuguese");
    char nomes[5][20], pesquisa[20];
    int i;


    for (i=0;i<5;i++)
    {
        printf("Digite o %iº nome\n", i+1);
        fgets(nomes[i],20,stdin);
        fflush(stdin);
    }

    printf("Digite o nome que deseja procurar na lista\n");
    fgets(pesquisa,20,stdin);
    fflush(stdin);


    for (i=0;i<=5;i++)
    {
        if (strcmp(pesquisa,nomes[i])==0)
        {
            printf("\nO nome foi encontrado na lista na posição %i", i+1);
            //break;
        }
    }


}
