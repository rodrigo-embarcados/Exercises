/******************************************************************************

Maior elemento
Preencha uma matriz 5x5 e encontre o maior valor armazenado.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[5][5], maior;
    printf("Insira números inteiros para preencher uma matriz de 5x5.\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Linha %d: \n", i + 1);
        for(int j = 0; j < 5; j++)
        {
            printf("\tInsira o %dº número: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior) maior = matriz[i][j];
        }
    }
    printf("O maior valor da matriz é %d.\n", maior);
    return 0;
}