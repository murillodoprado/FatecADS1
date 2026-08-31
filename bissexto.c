#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("ANO BISSEXTO\n");
    printf("Qual ano deseja consultar? ");
    scanf("%d", &ano);

    if (ano % 400 == 0)
    {
        printf("%d e um ano bissexto!", ano);
    }
    else if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("%d e um ano bissexto!", ano);
    }
    else
    {
        printf("%d nao e um ano bissexto!", ano);
    }

    return 0;
}