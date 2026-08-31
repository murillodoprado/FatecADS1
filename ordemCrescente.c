#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, temp, temp2;

    printf("ORDEM CRESCENTE\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &temp);

    if (temp > n1)
    {
        n2 = n1;
        n1 = temp;
    } else
    {
        n2 = temp;
    }

    printf("Digite o terceiro numero: ");
    scanf("%f", &temp);
    
    if (temp > n1)
    {
        n3 = n2;
        n2 = n1;
        n1 = temp;
    } else if (temp < n1 && temp > n2)
    {
        n3 = n2;
        n2 = temp;
    } else
    {
        n3 = temp;
    }

    printf("Os numeros em ordem crescente sao: %.2f, %.2f, e %.2f", n3, n2, n1);

    return 0;
}