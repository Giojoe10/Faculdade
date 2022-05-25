
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"portuguese");
    int la, i, k;

    printf("Digite a largura do Quadrado\n");
    scanf("%d",&la);

    for(i=1;i<=la;i++)
    {
            for(k=1;k<=la;k++)
            {
                if(i==1||i==la)
                {
                    if(k==1||k==la)
                    {
                        printf("O");
                    }
                    else
                    {
                        printf("-");
                    }
                }
                else
                {
                    if(k==1||k==la)
                    {

                        printf("|");
                    }
                    else
                    {
                        printf(" ");
                    }
                }


            }
        printf("\n");

    }
	
	system("pause);
	return 0;

}

