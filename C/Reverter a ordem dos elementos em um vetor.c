/******************************************************************************
Reverter a ordem dos elementos em um vetor.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[6] = {4, 5, 1, 3, 6, 9};
    int rotev[6];
    for(int i = 0, j = 5; i < 6 && j > -1; i++, j--){
        rotev[j] = vetor[i];
    }
    return 0;
}
