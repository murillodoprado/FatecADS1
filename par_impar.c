#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Escreva um numero: ");
    scanf("%d", &a);
    
    if (a % 2 == 0 && a < 100)
    {
        printf("Seu numero e par e menor que 100\n"); 
    } 
    else if ((a % 2 == 0 && a >= 100))
    {
        printf("Seu numero e par e maior que 100\n");   
    }
    else if (a % 2 != 0 && a < 100)
    {
        printf("Seu numero e impar e menor que 100\n");
    } 
    else
    {
        printf("Seu numero e impar e maior que 100\n");   
    }
    return 0;
}