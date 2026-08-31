#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, raiz, div, pot, fx;

    printf("Vamos calcular f(x)= raiz(x) + (x/2) + x^x\n");

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    raiz = sqrt(x);
    div = x/2;
    pot = pow(x,x);

    fx = raiz + div + pot;

    printf("O resultado de -> f(x)= raiz(x) + (x/2) + x^x <- e %.2lf", fx);

    return 0;
}