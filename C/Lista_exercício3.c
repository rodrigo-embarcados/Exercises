/******************************************************************************

Exercício 3 – Contar nós

Objetivo:
Escreva uma função que conta quantos nós existem em uma lista encadeada.

Exemplo esperado:
Se a lista for: 5 → 10 → 15, a função deve retornar 3.

Dica da assinatura: int contar_nos(No* inicio);

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *proximo_no;
} No;

int contar_nos(No* inicio);

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
    int qnt_nos = contar_nos(primeiro_valor);
    printf("A lista tem %d nós.\n", qnt_nos);
    return 0;
}

int contar_nos(No* inicio)
{
    No *atual = inicio;
    int cont = 0;
    while(atual != NULL)
    {
        cont++;
        atual = atual->proximo_no;
    }
    return cont;
}