#include <stdio.h>
#include <locale.h>
//Uma empresa decidiu fazer um levantamento em rela��o aos candidatos que se apresentarem para o preenchimento de vagas no seu quadro de funcion�rios.
//Supondo que voc� seja o Analista dessa empresa, fa�a um programa que exiba:
//O n�mero de candidatos do sexo masculino;
//O n�mero de candidatos do sexo feminino;
//A idade m�dia dos homens que j� tem experi�ncia no servi�o;
//A porcentagem dos homens com mais de 45 anos entre o total dos homens;
//O numero de mulheres com idade inferior a 35 anos e com experi�ncia em servi�o;
//A menor idade entre as mulheres que j� tem experi�ncia em servi�o.

int main()
{
    setlocale(0, "portuguese");
    int i, n, idade, f, mExp, f35, menorf;
    char sexo, experiencia;
    float mediam, porcentagemM45, m, m45;


    i=n=idade=m=f=mExp=m45=f35=menorf=mediam=porcentagemM45=0;

    printf("Insira o n�mero de candidatos:\n");
    scanf("%d", &n);
    fflush(stdin);
    for (i=1; i<=n; i++)
    {


        printf("\nDigite o sexo do %d� candidato (M/F)\n", i);
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\nInsira a idade do %d� candidato\n", i);
        scanf("%d", &idade);
        fflush(stdin);
        printf("\nO %d� funcion�rio tem experi�ncia?(S/N)\n", i);
        scanf("%c", &experiencia);
        fflush(stdin);

        if(sexo == 'M' || sexo == 'm')
        {
            m++;

            if(experiencia == 'S' || experiencia == 's')
            {
                mediam=mediam+idade;
                mExp++;
            }
            if (idade>45)
            {
                m45++;
            }


        }
        else if (sexo == 'F' || sexo == 'f')
        {

            f++;
            if (experiencia=='S' || experiencia =='s')
            {

                if (idade<35)
                {
                    f35++;
                }
                if (menorf==0)
                {
                    menorf=idade;
                }
                else
                {
                    if(idade<menorf)
                    {
                        menorf=idade;
                    }
                }
            }

        }


    }

    mediam=mediam/mExp;
    porcentagemM45=m45/m;
    //printf("\n m45= %d m= %d",m45,m);

    printf("\n\nN�mero de candidatos do sexo masculino: %.0f", m);
    printf("\nN�mero de candidatos do sexo feminino: %d", f);
    printf("\nIdade m�dia dos homens que j� tem experi�ncia: %.2f", mediam);
    printf("\nPorcentagem de homens com mais de 45 anos entre o total de homens: %.2f", porcentagemM45);
    printf("\nN�mero de mulheres com idade inferior a 35 anos e com experi�ncia em servi�o: %d", f35);
    printf("\nA menor idade entre as mulheres que j� tem experi�ncia em servi�o: %d", menorf);







}


//Uma empresa decidiu fazer um levantamento em rela��o aos candidatos que se apresentarem para o preenchimento de vagas no seu quadro de funcion�rios.
//Supondo que voc� seja o Analista dessa empresa, fa�a um programa que exiba:
//O n�mero de candidatos do sexo masculino;
//O n�mero de candidatos do sexo feminino;
//A idade m�dia dos homens que j� tem experi�ncia no servi�o;
//A porcentagem dos homens com mais de 45 anos entre o total dos homens;
//O numero de mulheres com idade inferior a 35 anos e com experi�ncia em servi�o;
//A menor idade entre as mulheres que j� tem experi�ncia em servi�o.

