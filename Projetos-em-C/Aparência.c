#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(){

setlocale(0,"portuguese");

int n, i, idade50peso60, ruivosNaoAzul;
char olho, cabelo;
float idade, peso, mediaMenores, altura, menores, olhosAzuis;

idade50peso60=olhosAzuis=ruivosNaoAzul=mediaMenores=menores=0;

printf("Análise e Desenvolvimento de Sistemas - Fatec Americana, Manhã\nLinguagem de Programação\nPrograma desenvolvido pelo aluno: GIOVANNI MATEUS BARBIERI (RA:0040482021002)\nProfessor: TONI\n\n");


printf("Digite o número de pessoas\n");
scanf("%i", &n);
fflush(stdin);

for (i=1; i<=n; i++){

    //Coleta dos dados + Validação

    printf("Insira a idade da %iª pessoa\n", i);
    scanf("%f", &idade);
    fflush(stdin);

    printf("Insira o peso dela (kg)\n");
    scanf("%f", &peso);
    fflush(stdin);

    printf("Insira a altura dela (metros)\n");
    scanf("%f", &altura);
    fflush(stdin);

    printf("Insira a cor dos olhos ([A]zul, [P]reto, [C]astanho, [V]erde)\n");
    scanf("%c", &olho);
    olho=toupper(olho);
    fflush(stdin);
    while (olho != 'A' && olho != 'P' && olho != 'C' && olho != 'V'){
        printf("Valor Incorreto, por favor digite novamente\n");
        printf("%c", olho);
        scanf("%c", &olho);
        olho=toupper(olho);
        fflush(stdin);
    }

    printf("Insira a cor dos cabelos ([P]reto, [C]astanho, [L]ouro, [R]uivo)\n");
    scanf("%c", &cabelo);
    cabelo=toupper(cabelo);
    fflush(stdin);
    while (cabelo != 'P' && cabelo != 'C' && cabelo != 'L' && cabelo != 'R'){
        printf("Valor Incorreto, por favor digite novamente\n");
        scanf("%c", &cabelo);
        cabelo=toupper(cabelo);
        fflush(stdin);
    }


    //Cálculos
    if (idade>50 && peso<60){
        idade50peso60++;
    }
    if (altura<1,5){
        mediaMenores+=idade;
        menores++;
    }
    if (olho == 'A'){
        olhosAzuis++;
    }
    if ( cabelo == 'R' && olho != 'A'){
        ruivosNaoAzul++;
    }

}

mediaMenores=mediaMenores/menores;
olhosAzuis=(100/n)*olhosAzuis;



printf("\n\nQuantidade de pessoas com mais de 50 anos e menos de 60kg: %i\n", idade50peso60);
printf("Média das idades das pessoas com altura inferior a 1,50: %.2f\n", mediaMenores);
printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f%\n", olhosAzuis);
printf("Quantidade de pessoas ruivas que não possuem olhos azuis: %i\n", ruivosNaoAzul);



}
