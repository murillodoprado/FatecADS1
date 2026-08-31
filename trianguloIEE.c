#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    double area, s;
    char *tipo;
    char list[3][20] = {
        "Isosceles", 
        "Escaleno", 
        "Equilatero"
    };

    printf("Vamos calcular a area do triangulo.\n");
    printf("Qual o lado a? ");
    scanf("%f", &a);
    printf("Qual o lado b? ");
    scanf("%f", &b);
    printf("Qual o lado c? ");
    scanf("%f", &c);

    if (a == b && b == c) {
        tipo = list[2];
    } else if (a != b && b != c && c != a) {
        tipo = list[0];
    } else {
        tipo = list[1];
    }
    
    s = (a+b+c)/2;
    area = sqrt(s)*(s-a)*(s-b)*(s-c);

    printf("O triangulo e %s e sua area e %.2lf", tipo, area) ;

    return 0;
}