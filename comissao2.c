#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorVenda, comissao;

    printf("### CALCULO DE COMISSAO ###\n");
    
    printf("Qual o valor de venda?: ");
    scanf("%f", &valorVenda);
    
    if (valorVenda <= 2500)
    {
        comissao = (valorVenda * 0.017) + 30;
        if (comissao < 39) {
            comissao = 39;
        } 
    } else if (valorVenda <= 6250) {
        comissao = (valorVenda * 0.0066) + 56;
    } 
    else if (valorVenda <= 20000) {
        comissao = (valorVenda * 0.0034) + 76;
    } 
    else if (valorVenda <= 50000) {
        comissao = (valorVenda * 0.0022) + 100;
    } 
    else if (valorVenda <= 500000) {
        comissao = (valorVenda * 0.0011) + 155;
    } 
    else {
        comissao = (valorVenda * 0.0009) + 255;
    }
     
    printf("O valor da comissao e R$%.2f\n", comissao);
    
    return 0;
}