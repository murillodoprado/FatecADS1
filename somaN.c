#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s;

    printf("SOMA DE GAUSS\n");
    printf("Digite um tamanho para a sequencia de numeros");
    scanf("%d", &n);
    
    s = (n*(n+1))/2;

    printf("O resultado da soma de Gauss e %d\n", s);
    
    return 0;
}