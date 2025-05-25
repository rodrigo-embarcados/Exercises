/******************************************************************************

95. Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6
por 6, colocando os valores contidos nela em um vetor de 36 elementos e mostrar o
conteúdo do vetor.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[36], matriz[6][6];
    srand(time(NULL));
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            matriz[i][j] = rand() % 1000;
            vetor[(i * 6) + j] = matriz[i][j];
        }
    }
    printf("Vetor gerado: {");
    for(int i = 0; i < 36; i++)
    {
        printf(i < 35 ? "%d, " : "%d}.\n", vetor[i]);
    }
    return 0;
}