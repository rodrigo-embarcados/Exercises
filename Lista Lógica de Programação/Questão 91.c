/******************************************************************************

91. Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e
somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da
linha correspondente na matriz A. Da mesma forma, em cada posição do vetor
somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5], somaLinhas[5] = {0}, somaColunas[5] = {0};
    printf("Digite números inteiros para preencher uma matriz 5x5:\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Linha %d:\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("\tDigite o %dº número: ", j + 1);
            scanf("%d", &matriz[i][j]);
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }
    printf("\nMatriz gerada:\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSomas das linhas e colunas:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("\tSoma da linha %d: %d.\n", i + 1, somaLinhas[i]);
    }
    for(int j = 0; j < 5; j++)
    {
        printf("\tSoma da coluna %d: %d.\n", j + 1, somaColunas[j]);
    }
    return 0;
}