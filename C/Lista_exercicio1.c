/******************************************************************************

Exercício 1 – Criação e impressão

Objetivo:
Crie manualmente uma lista encadeada com 3 nós contendo os valores 5, 10 e 15. Em seguida, percorra e imprima os valores da lista.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *proximo_no;
} No;

int main()
{
    No *primeiro_valor = malloc(sizeof(No));
    No *segundo_valor = malloc(sizeof(No));
    No *terceiro_valor = malloc(sizeof(No));
    
    primeiro_valor->valor = 5;
    primeiro_valor->proximo_no = segundo_valor;
    segundo_valor->valor = 10;
    segundo_valor->proximo_no = terceiro_valor;
    terceiro_valor->valor = 15;
    terceiro_valor->proximo_no = NULL;
    No *atual = primeiro_valor;
    while(atual != NULL)
    {
        printf("%d \n", atual->valor);
        atual = atual->proximo_no;
    }
    free(primeiro_valor);
    free(segundo_valor);
    free(terceiro_valor);
    return 0;
}