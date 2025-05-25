/******************************************************************************

96. Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define l 3
#define c 4

void preencher_exibir_matriz(int matriz[l][c])
{
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("\t%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void soma_matriz(int matriz1[l][c], int matriz2[l][c], int matriz3[l][c])
{
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("\t%4d", matriz3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void diferenca_matriz(int matriz1[l][c], int matriz2[l][c], int matriz3[l][c])
{
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
            printf("\t%4d", matriz3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int matriz1[l][c], matriz2[l][c], matriz_soma[l][c], matriz_diferenca[l][c];
    srand(time(NULL));
    printf("Matriz 1:\n\n");
    preencher_exibir_matriz(matriz1);
    printf("Matriz 2:\n\n");
    preencher_exibir_matriz(matriz2);
    printf("Soma da Matriz 1 e Matriz 2:\n\n");
    soma_matriz(matriz1, matriz2, matriz_soma);
    printf("Diferença entre a Matriz 1 e Matriz 2:\n\n");
    diferenca_matriz(matriz1, matriz2, matriz_diferenca);
    return 0;
}