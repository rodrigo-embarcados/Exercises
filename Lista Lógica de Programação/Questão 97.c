/******************************************************************************

97. Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 5 por 5 e a exiba. A seguir, leia dois números x e y e em seguida troque a x-
ésima linha pela y-ésima linha, a x-ésima coluna com a y-ésima coluna, a diagonal
principal com a secundária e, por fim mostre a matriz assim modificada.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5], x, y, temp;
    do
    {
        printf("Insira 2 números inteiros entre 1 e 5:\n");
        scanf("%d%d", &x,&y);
    }
    while (x < 1 || x > 5 || y < 1 || y > 5);
    srand(time(NULL));
    printf("\nMatriz gerada:\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
           matriz[i][j] = rand() % 100;
           printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 5; i++)              //Troca de linhas
    {
        temp = matriz[x - 1][i];
        matriz[x - 1][i] = matriz[y - 1][i];
        matriz[y - 1][i] = temp;
    }
    for(int i = 0; i < 5; i++)              //Troca de colunas
    {
        temp = matriz[i][x - 1];
        matriz[i][x - 1] = matriz[i][y - 1];
        matriz[i][y - 1] = temp;
    }
    for(int i = 0; i < 5; i++)              //Troca de diagonais
    {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = temp;
    }
    printf("\nMatriz modificada:\n\n");
    for(int i = 0; i < 5; i++)              //Exibição da matriz modificada
    {
        for(int j = 0; j < 5; j++)
        {
           printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}