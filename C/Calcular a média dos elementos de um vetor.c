/******************************************************************************
Encontrar o maior e o menor valor em um vetor.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[6] = {4, 5, 1, 3, 6, 9};
    int maior, menor;
    maior = menor = vetor[0];
    for(int i = 1; i < 6; i++){
        if(maior <= vetor[i]) maior = vetor[i];
        if(menor >= vetor[i]) menor = vetor[i];
    }
    printf("O maior valor do vetor é %d e o menor é %d", maior, menor);
    return 0;
}
