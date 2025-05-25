/******************************************************************************

3. Matriz Identidade

Leia uma matriz 3x3 e verifique se ela é uma matriz identidade (1 na diagonal principal e 0 nos demais elementos).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}, diag = 1, n_diag = 1;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j && matriz[i][j] == 0) diag = 0;           //Verifica diagonal
            if(i != j && matriz[i][j] == 1) n_diag = 0;         //Verifica demais elementos
        }
    }
    if(diag && n_diag) printf("A matriz é identidade.\n");
    else printf("A matriz não é identidade.\n");
    return 0;
}