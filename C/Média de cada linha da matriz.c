/******************************************************************************

Média de cada linha
Leia uma matriz 4x4 e exiba a média dos elementos de cada linha.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4];
    printf("Insira números inteiros para preencher uma matriz de 4x4.\n");
    for(int i = 0; i < 4; i++)
    {
        printf("Linha %d: \n", i + 1);
        for(int j = 0; j < 4; j++)
        {
            printf("\tInsira o %dº número: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        int aux = 0;
        for(int j = 0; j < 4; j++)
        {
            aux += matriz[i][j];
        }
        printf("A média dos números da linha %d é %.2f.\n", i + 1, (float)aux / 4);
    }
    return 0;
}
