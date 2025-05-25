/******************************************************************************

Questão 64.c
Preecher um vetor de 20 inteiros e imprimir o maior e o menor número.
Versão com bubblesort.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], temp;
    printf("Insira 20 números inteiros para preencher um vetor:\n");
    for(int i = 0; i < 20; i++){
        printf("\tInsira o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 20 - 1; i++){
        for(int j = 0; j < 20 - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                temp = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    printf("O maior número do vetor é %d e o menor é %d", vetor[19], vetor[0]);
    return 0;
}
