/******************************************************************************

4. Soma das Linhas e Colunas

Leia uma matriz 3x3 e exiba a soma de cada linha e a soma de cada coluna.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_linha(int matriz[3][3], int l)
{
    int soma = 0;
    for(int i = 0; i < 3; i++)
    {
        soma += matriz[l][i];
    }
    return soma;
}
int soma_coluna(int matriz[3][3], int c)
{
    int soma = 0;
    for(int i = 0; i < 3; i++)
    {
        soma += matriz[i][c];
    }
    return soma;
}

int main()
{
    int matriz[3][3];
    srand(time(NULL));
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
    printf("Matriz gerada:\n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Soma da linha %d: %d.\n", i + 1, soma_linha(matriz, i));
    }
    for(int i = 0; i < 3; i++)
    {
        printf("Soma da coluna %d: %d.\n", i + 1, soma_coluna(matriz, i));
    }
    return 0;
}