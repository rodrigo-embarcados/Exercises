/******************************************************************************

Multiplicação de matrizes
Implemente um programa que multiplique duas matrizes 2x2 e exiba o resultado.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz1[2][2] = {{2, 2}, {3, 3}}, matriz2[2][2] = {{4, 4}, {5, 5}}, resultado[2][2] = {0};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf(j < 1 ? "\t%d" : "\t%d\n", resultado[i][j]);
        }
    }
    return 0;
}