/******************************************************************************

Exercício 1: Vetor de inteiros dinâmico

Peça ao usuário a quantidade de números a serem lidos. 
Aloca dinamicamente um vetor de inteiros, preencha com dados do teclado e mostre a soma total.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntd, soma = 0;
    printf("Insira a quantidade de elementos do vetor: ");
    scanf("%d", &qntd);
    int *p = malloc(qntd * sizeof(int));
    printf("Agora insira %d valores inteiros para preencher o vetor: ", qntd);
    for(int i = 0; i < qntd; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Eis o vetor preenchido: {");
    for(int i = 0; i < qntd; i++)
    {
        printf(i < qntd - 1 ? "%d, " : "%d}.\n", *(p + i));
    }
    for(int i = 0; i < qntd; i++)
    {
        soma += *(p + i);
    }
    printf("A soma total dos elementos do vetor é: %d.\n", soma);
    free(p);
    return 0;
}