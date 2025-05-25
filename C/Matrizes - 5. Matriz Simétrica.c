/******************************************************************************
5. Matriz Simétrica

Leia uma matriz 3x3 e verifique se ela é simétrica (matriz igual à sua transposta).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}}, simetrica = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(matriz[i][j] != matriz[j][i]) simetrica = 0;
        }
    }
    if(simetrica) printf("A matriz é simétrica.\n");
    else printf("A matriz não é simétrica.\n");
    return 0;
}