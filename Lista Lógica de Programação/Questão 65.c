/******************************************************************************

Questão 65.c
Preecher um vetor de 20 inteiros e imprimir o maior e o menor número.
Imprimir também qual a posição do maior e do menor número..

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], menor, maior, pos_min = 0, pos_max = 0;
    printf("Insira 20 números inteiros para preencher um vetor:\n");
    for(int i = 0; i < 20; i++){
        printf("\tInsira o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if(i == 0){
            maior = menor = vetor[0];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
            pos_max = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pos_min = i;
        }
    }
    printf("O maior valor do vetor é %d e está na posição %d.\n", maior, pos_max); // ou pos_max + 1
    printf("O menor valor do vetor é %d e está na posição %d.\n", menor, pos_min); // ou pos_min + 1
}