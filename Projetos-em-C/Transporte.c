#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int dmain()
{

    setlocale(0,"portuguese");

    int i, qnt, pais;
    float preco, imposto=2, vtransporte, seguro, vfinal;
    char transporte, perigo;

    printf("Insira o número de produtos\n");
    scanf("%i", &qnt);
    fflush(stdin);

    for (i=1; i<=qnt; i++)
    {

        printf("\nInsira o valor do %iº produto\n",i);
        scanf("%f", &preco);
        fflush(stdin);

        printf("Insira o país de orgiem (1-EUA 2-Mexico 3-Outros)\n");
        scanf("%i", &pais);
        fflush(stdin);

        printf("Insira o meio de transporte ([T]errestre, [F]luvial, [A]éreo)\n");
        scanf("%c", &transporte);
        transporte = toupper(transporte);
        fflush(stdin);

        printf("A carga é perigosa? S/N\n");
        scanf("%c", &perigo);
        perigo = toupper(perigo);
        fflush(stdin);


        //Imposto
        if(preco<=100)
        {
            imposto=0.05;
        }
        else
        {
            imposto=0.10;
        }

        //Valor do transporte

        if(perigo=='S')
        {
            if (pais=1)
            {
                vtransporte = 50;
            }
            else if (pais=2)
            {
                vtransporte = 35;
            }
            else if (pais=3)
            {
                vtransporte = 24;
            }

        }
        if(perigo=='N')
        {
            if (pais=1)
            {
                vtransporte = 12;
            }
            else if (pais=2)
            {
                vtransporte = 34,50;
            }
            else if (pais=3)
            {
                vtransporte = 60;
            }

        }

        //Seguro

        if (pais=2 || transporte=='A'){
            seguro = preco/2;
        }

        //Calculos finais

        vfinal = preco + seguro + vtransporte + (imposto*preco);

        //Exibição dos dados finais
        printf("Para o produto %i:\n", i);
        printf("     Valor final do produto: R$%.2f\n",vfinal);
        printf("     Total de impostos: R$%.2f\n", (imposto*preco));
        printf("     Custo de transporte: R$%.2f\n", vtransporte);

    }



}
