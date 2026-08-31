#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    char *prato;
    char menu [5][50] = {
        "1 - Picanha com batata frita",
        "2 - Frango grelhado com creme de milho",
        "3 - Strogonoff de frango",
        "4 - Bife acebolado",
        "5 - SAIR"
    };

    while (1)
    {
        printf("--- CARDAPIO ---\n");
        printf("%s\n", menu[0]);
        printf("%s\n", menu[1]);
        printf("%s\n", menu[2]);
        printf("%s\n", menu[3]);
        printf("%s\n", menu[4]);
    
        printf("Qual seu pedido? ");
        scanf("%d", &opcao);
        char *prato = menu[opcao-1];

        if (opcao == 5)
        {
            printf("Obrigado e volte sempre!\n");
            break;
        } else if (opcao >0 && opcao <5)
        {
            printf("O prato selecionado foi %s\n", prato);
            
        } else
        {
            printf("Opcao invalida, tente novamente.\n");
            
        }

    }
    
    return 0;
}