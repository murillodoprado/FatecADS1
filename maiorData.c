#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, m1, a1;
    int d2, m2, a2;

    printf("VAMOS CALCULAR A MAIOR DATA\n");
    
    printf("Digite o dia da primeira data: ");
    scanf("%d", &d1);
    printf("Digite o mes da primeira data: ");
    scanf("%d", &m1);
    printf("Digite o ano da primeira data: ");
    scanf("%d", &a1);

    printf("Digite o dia da segunda data: ");
    scanf("%d", &d2);
    printf("Digite o mes da segunda data: ");
    scanf("%d", &m2);
    printf("Digite o ano da segunda data: ");
    scanf("%d", &a2);

    if (a2 > a1)
    {
        printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d2,m2,a2,d1,m1,a1);
    } else if (a2 < a1)
    {
        printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d1,m1,a1,d2,m2,a2);
    } else
        if (m2 > m1)
    {
            printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d2,m2,a2,d1,m1,a1);
    }   else if (m2 < m1)
    {
            printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d1,m1,a1,d2,m2,a2);  
    }   else
            if (d2 > d1)
    {
                printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d2,m2,a2,d1,m1,a1);
    }       else if (d2 < d1)
    {
                printf("A data mais recente e %d/%d/%d, e a data mais antiga e %d/%d/%d.", d1,m1,a1,d2,m2,a2);
    }       else
    {
                printf("As duas datas sao iguais, %d/%d/%d.", d1,m1,a1);
    }

    return 0;
}