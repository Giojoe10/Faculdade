#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <unistd.h>


int fatorial(int n){

    if (n==0){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

    //e^-l * l^k
    //k!
    //k<=12

int main(){
    setlocale(0,"portuguese");

    float resultado;
    float e=2.71828;
    float l; //Média
    float k; //Número esperado de ocorrências
    char resp;

    printf("=========================================================================================\n");
    printf("Programa desenvolvido pelo aluno Giovanni Mateus Barbieri (RA:0040482021002)\n");
    printf("pela aula de Estátistica Aplicada, no curso de Análise e Desenvolvimento de Sistemas\n");
    printf("=========================================================================================\n");



    do{
    printf("\nQual a média de ocorrências?\n");
    scanf("%f", &l);
    printf("Qual o valor desejado de ocorrências? (Deve ser menor do que 12)\n");
    scanf("%f", &k);
    while (k>12){
        printf("A linguagem C não permite valores tão elevados, por favor, insira um número menor.\n");
        scanf("%f", &k);
    }

    resultado = (pow(e,-l) * pow(l,k))/fatorial(k);
    //printf("DEBUG: fatorial(k)=%i\n", fatorial(k));
    printf("\nA probabilidade de %.0f ocorrências é de = %.2f%%\n", k, resultado*100);
    //system("pause");
fflush(stdin);
    printf("\n\nDeseja continuar? [S/N]\n");
    scanf("%c", &resp);
    fflush(stdin);
    }while(resp=='s'||resp=='S'||resp=='\n');


    printf("\nMuito obrigado!");
    sleep(2);
    return 0;
}
