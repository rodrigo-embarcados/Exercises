/******************************************************************************

Transposta de uma matriz
Dada uma matriz 3x3, crie uma matriz transposta (troca de linhas por colunas).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3] = {{5, 3, 4}, {2, 4, 6}, {1, 2, 3}}, aux;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(j < 2 ? "\t%d" : "\t%d\n", matriz[i][j]);
        }
    }
    return 0;
}