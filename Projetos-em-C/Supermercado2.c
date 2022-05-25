
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main(){


//Fa�a um programa que receba o pre�o unit�rio, a Refrigera��o - (S para produtos  que necessitem de Refrigera��o e N para produtos que n�o necessitem de Refrigera��o)
//e a Categoria ( A � Alimenta��o, L- Limpeza e V � Vestu�rio) de 12 produtos. Calcule e mostre conforme requisitos abaixo :
//------//
//Custo de Estocagem conforme Tabela;
//Imposto
//Classifica��o do Produto
//Valor Final ( Valor Unit�rio, Custo de Estocagem + Imposto)

setlocale(0,"portuguese");

int i;
float preco, estocagem, imposto, valorFinal;
char refrigeracao, categoria;


for (i=1;i<=12;i++)
{
    printf("Insira o pre�o do %d� produto\n", i);
    scanf("%f", &preco);
    fflush(stdin);

    printf("\nO produto precisa ser refrigerado? (S/N)\n");
    scanf("%c", &refrigeracao);

    fflush(stdin);


    printf("\nInforme a cateogira do produto (A-Alimenta��o; L-Limpeza; V-Vestu�rio)\n");
    scanf("%c", &categoria);
    fflush(stdin);


    if(preco<50)
    {
        if (categoria=='A' || categoria=='a')
        {
            estocagem=5;
        }
        else if (categoria == 'L' || categoria=='l')
        {
            estocagem=10;
        }
        else if(categoria == 'V' || categoria=='v')
        {
            estocagem=15;
        }
    }else if (preco<70)
    {
        if (refrigeracao=='S' || refrigeracao=='s')
        {
            estocagem=21;
        }
        else if(refrigeracao=='N' || refrigeracao=='n')
        {
            estocagem=12;
        }



    }else
    {
        if ((refrigeracao=='S' || refrigeracao=='s') && (categoria=='A' || categoria=='a'))
        {
            estocagem=6;
        }
        else if ((refrigeracao=='N' || refrigeracao=='n') && (categoria=='L' || categoria=='l'))
        {
            estocagem=2;
        }
        else if (categoria=='V' || categoria=='v')
        {
            estocagem=4;
        }
        else if(categoria=='A' || categoria=='V' || categoria=='a' || categoria=='v')
        {
            estocagem=0;
        }
        else if (categoria=='L' || categoria=='l')
        {
            estocagem=1;
        }


    }

    if ((categoria=='A' || categoria=='a') && (refrigeracao=='S' || refrigeracao=='s'))
    {
        imposto = 0,02;
    }
    else
    {
        imposto = 0,04;
    }



    valorFinal=preco+estocagem+(preco*imposto);





    printf("\nPre�o Unit�rio do Produto: R$%.2f", preco);
    printf("\nCusto de estocagem: R$%.2f", estocagem);
    printf("\nImposto: R$%.2f", imposto);
    if(valorFinal>50)
    {
    printf("\nClassifica��o do Produto: Barato");
    }
    else if (valorFinal<70)
    {
    printf("\nClassifica��o do Produto: Normal");
    }
    else
    {
    printf("\nClassifica��o do Produto: Caro");
    }
    printf("\nValor Final do %d� produto: R$%.2f\n\n", i, valorFinal);


}









}

//Fa�a um programa que receba o pre�o unit�rio, a Refrigera��o - (S para produtos  que necessitem de Refrigera��o e N para produtos que n�o necessitem de Refrigera��o)
//e a Categoria ( A � Alimenta��o, L- Limpeza e V � Vestu�rio) de 12 produtos. Calcule e mostre conforme requisitos abaixo :
//------//
//Custo de Estocagem conforme Tabela;
//Imposto
//Classifica��o do Produto
//Valor Final ( Valor Unit�rio, Custo de Estocagem + Imposto)
