/******************************************************************************

98. Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes (4x3 e
3x2), calcule e imprima a matriz que representa o produto entre as duas matrizes lidas.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz1[4][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}}, matriz2[3][2] = {{1, 2}, {3, 4}, {5, 6}}, resultado[4][2] = {0};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    printf("Matriz 1:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("\t%d", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("\t%d", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\nO produto da matriz 1 pela matriz 2 é:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("\t%d", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}