/******************************************************************************

Questão 64.c
Preecher um vetor de 20 inteiros e imprimir o maior e o menor número.
Versão com if.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], menor, maior;
    printf("Insira 20 números inteiros para preencher um vetor:\n");
    for(int i = 0; i < 20; i++){
        printf("\tInsira o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = menor = vetor[0];
    for(int i = 0; i < 20; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O maior valor do vetor é %d e o menor é %d\n", maior, menor);
}