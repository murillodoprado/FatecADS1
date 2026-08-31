#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;

        printf("-- CALCULO DE POTENCIA --\n");
        printf("Qual o valor da base? ");
        scanf("%d", &a);
        d = a;
        printf("Qual o valor do expoente? ");
        scanf("%d", &b);

    for (c = 1; c < b; c++)
    {
        d = d*a;
    }
    
    printf("O resultado e %d\n", d);
    
    return 0;
}