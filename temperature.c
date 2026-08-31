#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char tipo1, tipo2;
    float temp1, temp2;

    printf("CALCULO DE TEMPERATURA\n");
    printf("Celsius ou Fahrenheit (C/F)? ");
    scanf("%c", &tipo1);

    printf("Qual a temperatura? ");
    scanf("%f", &temp1);

    if (tipo1 == 'C' || 'c')
    {
        tipo2 = 'F';
        temp2 = temp1*1.8+32;
    }
    else if (tipo1 == 'F' || 'f')
    {
        tipo2 = 'C';
        temp2 = (temp1-32)*5/9;

    }
    
    printf("%.1f%c e igual a %.1f%c", temp1, toupper(tipo1), temp2, tipo2);

    return 0;
}