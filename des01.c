#include <stdio.h>

/* 
##### MURILLO DO PRADO #####
RA: 2760482621013

O programa tem o objetivo de calcular a circunferência de um planeta.
Esta circunferência é calculada tal qual calculou Eratóstenes,
sabendo a distância entre duas cidades e o grau de inclinação de uma sombra.
*/

int main()
{
    float d, a, estadios, km;
    char tipo;

    printf("CIRCUNFERENCIA DE UM PLANETA\n");

    // Há a opção de começar o cálculo sabendo a distância em kilometros ou em estadios.
    printf("A distancia fornecida sera em Estadios ou Kilometros? (E/K)? ");
    scanf("%c", &tipo);
    
    printf("Digite a distancia entre as duas cidades: ");
    scanf("%f", &d);

    printf("Digite o angulo do raio de sol: ");
    scanf("%f", &a);
    
    /* 
    Cálculo das distâncias totais:
     - A lógica leva em conta o tipo de valor informado (Estádios ou Kilometros).
     - É feita a divisão da distância informada pelo ângulo informado,
    a fim de descobrir a distância equivalente para cada grau.
     - A distância de cada grau é multiplicada por 360,
    obtendo a circunferência completa do planeta.
     - Esta circunferência é convertida para o outro tipo de valor.
    */

    // O cálculo aceita o tipo em maiúsculo ou em minúsculo.
    if (tipo == 'E' || tipo == 'e') 
    {    
        estadios = ((d/a)*360);
        km = estadios*176.4;
        printf("A circunferencia corresponde a %.2f estadios e a %.2fkm\n", estadios, km); 
    }
    else if (tipo == 'K' || tipo == 'k')
    {
        km = ((d/a)*360);
        estadios = km/176.4;
        printf("A circunferencia corresponde a %.2f estadios e a %.2fkm\n", estadios, km);
    }
    
    return 0;
}