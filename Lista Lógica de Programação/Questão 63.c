/******************************************************************************

Questão 63: 
Soma de 2 vetores de 10 posições cada

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10];
    printf("Insira 10 nũmeros para preencher o vetor 1:\n");
    for(int i = 0; i < 10; i++){
        printf("Insira o número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    printf("Insira 10 nũmeros para preencher o vetor 2:\n");
    for(int i = 0; i < 10; i++){
        printf("Insira o número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    printf("A soma dos vetores 1 e 2 é: ");
    printf("{");
    for(int i = 0; i < 10; i++){
        printf(i < 9 ? "%d, ": "%d}\n", vetor1[i] + vetor2[i]);
    }
    return 0;
}