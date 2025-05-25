/******************************************************************************

Soma dos elementos
Escreva um programa que preencha uma matriz 3x3 com valores fornecidos pelo usuário e exiba a soma de todos os elementos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3], soma = 0;
    printf("Digite números inteiros para preencher uma matriz 3x3.\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Linha %d:\n", i + 1);
        for(int j = 0; j < 3; j++)
        {
            printf("\tInsira o %dº número: ", j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os números da matriz é %d.\n\n", soma);
    printf("Segue a matriz com os números digitados:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(j < 2 ? "\t%d" : "\t%d\n", matriz[i][j]);
        }
    }
    return 0;
}
