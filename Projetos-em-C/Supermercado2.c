
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main(){


//Faça um programa que receba o preço unitário, a Refrigeração - (S para produtos  que necessitem de Refrigeração e N para produtos que não necessitem de Refrigeração)
//e a Categoria ( A – Alimentação, L- Limpeza e V – Vestuário) de 12 produtos. Calcule e mostre conforme requisitos abaixo :
//------//
//Custo de Estocagem conforme Tabela;
//Imposto
//Classificação do Produto
//Valor Final ( Valor Unitário, Custo de Estocagem + Imposto)

setlocale(0,"portuguese");

int i;
float preco, estocagem, imposto, valorFinal;
char refrigeracao, categoria;


for (i=1;i<=12;i++)
{
    printf("Insira o preço do %dº produto\n", i);
    scanf("%f", &preco);
    fflush(stdin);

    printf("\nO produto precisa ser refrigerado? (S/N)\n");
    scanf("%c", &refrigeracao);

    fflush(stdin);


    printf("\nInforme a cateogira do produto (A-Alimentação; L-Limpeza; V-Vestuário)\n");
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





    printf("\nPreço Unitário do Produto: R$%.2f", preco);
    printf("\nCusto de estocagem: R$%.2f", estocagem);
    printf("\nImposto: R$%.2f", imposto);
    if(valorFinal>50)
    {
    printf("\nClassificação do Produto: Barato");
    }
    else if (valorFinal<70)
    {
    printf("\nClassificação do Produto: Normal");
    }
    else
    {
    printf("\nClassificação do Produto: Caro");
    }
    printf("\nValor Final do %dº produto: R$%.2f\n\n", i, valorFinal);


}









}

//Faça um programa que receba o preço unitário, a Refrigeração - (S para produtos  que necessitem de Refrigeração e N para produtos que não necessitem de Refrigeração)
//e a Categoria ( A – Alimentação, L- Limpeza e V – Vestuário) de 12 produtos. Calcule e mostre conforme requisitos abaixo :
//------//
//Custo de Estocagem conforme Tabela;
//Imposto
//Classificação do Produto
//Valor Final ( Valor Unitário, Custo de Estocagem + Imposto)
