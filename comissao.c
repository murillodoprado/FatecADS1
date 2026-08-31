#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vendedor;
    float venda, percentual, comissao;

    printf("CALCULO DE PORCENTAGEM DE COMISSAO \n");

    printf("Qual o codigo do vendedor?");
    scanf("%d", &vendedor);

    printf("Qual o valor da venda? \n");
    scanf("%f", &venda);

    printf("Qual a porcentagem de comissao? \n");
    scanf("%f", &percentual);

    percentual = (percentual/100);
    comissao = venda * percentual;

    printf("A comissao do vendedor %d e R$%.2f", vendedor, comissao);

    return 0;
}