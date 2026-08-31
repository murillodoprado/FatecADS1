#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, cont;

    printf("APOSENTADORIA\n");
    
    printf("Qual seu sexo? (M/F) ");
    scanf("%c", &sexo);

    printf("Qual sua idade? ");
    scanf("%d", &idade);
    
    printf("Qual seu tempo de contribuicao? ");
    scanf("%d", &cont);
    
    if (sexo == 'M' || sexo == 'm' && (idade >=65 && cont >=10) || (idade >=63 && cont >=15))
    {
        printf("O senhor e aposentavel.\n");
    } else if ((sexo == 'F' || sexo == 'f' && (idade >=63 && cont >=10) || (idade >=61 && cont >=15)))
    {
        printf("A senhora e aposentavel.\n");
    } else
    {
        printf("Nao aposentavel.\n");
        
    }

    return 0;
}