/******************************************************************************

92. Elabore um programa em C, para ler valores e armazená-los em uma matriz 5 x 5. Após o
programa deverá responder se a matriz é ou não uma matriz simétrica. Uma matriz
simétrica possui a mesma composição de valores abaixo e acima da diagonal principal.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5], simetrica = 1;
    printf("Digite números inteiros para preencher uma matriz 5x5:\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Linha %d:\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("\tDigite o %dº número: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if(matriz[i][j] != matriz[j][i]) simetrica = 0;
        }
    }
    if(simetrica) printf("A matriz é simétrica.\n");
    else printf("A matriz não é simétrica.\n");
    return 0;
}