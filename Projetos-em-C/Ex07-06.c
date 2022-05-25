#include <stdio.h>
#include <locale.h>



int main(){

setlocale(0,"portuguese");

int vetor1[5];
int vetor2[10];
int matriz[4][3];
int i,j;
int maior=0, menor=1000;


//ENTRADA DE DADOS

for(i=0;i<5;i++){

    printf("Insira o %dº valor do primeiro vetor\n",i+1);
    scanf("%i", &vetor1[i]);
    if(vetor1[i]>maior){

        maior=vetor1[i];
    }

}

system("cls");

for(i=0;i<10;i++){

    printf("Insira o %dº valor do segundo vetor\n",i+1);
    scanf("%i", &vetor2[i]);
    if(vetor2[i]<menor){

        menor=vetor2[i];
    }

}

system("cls");

for(i=0;i<4;i++){

    for(j=0;j<3;j++){

        printf("Insira o %dº valor da %dª linha da matriz\n", j+1,i+1);
        scanf("%i", &matriz[i][j]);
    }
}

system("cls");


//CÁLCULOS E EXIBIÇÃO


    printf("Menor valor do primeiro vetor * menor valor do segundo vetor:\n");
    printf("%d * %d = %d", maior,menor,maior*menor);

    printf("Matriz + o Resultado anterior:\n");
    for(i=0;i<4;i++){

        for(j=0;j<3;j++){

            printf("%d ", matriz[i][j]);

        }
        if(i==2){
            printf("     + %d",maior*menor);
        }
        printf("\n");
    }


    printf("\n\n");
    for(i=0;i<4;i++){

            for(j=0;j<3;j++){

            printf("%d ", matriz[i][j]+maior*menor);

        }

        printf("\n");
    }

}
