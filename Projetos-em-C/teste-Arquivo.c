#include <stdio.h>
#include <stdlib.h>


criando()
{

FILE *ptr;

ptr =fopen("dados","a");

fclose(ptr);

}



cadastro()
{

FILE *ptr;

char palavra[20];

ptr = fopen("dados","w");

printf("\n Escreva uma palavra");
scanf ("%s", palavra);

fprintf(ptr,"%s", palavra);

fclose(ptr);
}


main()
{
int op;
    system("pause");
  do{
    printf("\n [1] - Criando o Arquivo");
    printf("\n [2] - Gravando Palavra");
    printf("\n [3] - Saindo do Sistema");

    printf("\n Escolha a opção");

    scanf("%d",&op);

    switch (op)
    {
    case 1:
        criando();
        break;
    case  2:
        cadastro();
        break;
    case 3:
        exit(0);

    default :
        printf("\n Opção Invalida... tente novamente");
        system("pause");
    }
  }while(op !=4);
}

