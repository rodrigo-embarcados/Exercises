#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
} No;

No *inserir_no(No *inicio, int valor)
{
    No *novo_no = (No *) malloc(sizeof(No));
    if (novo_no == NULL)
    {
        printf("Erro ao criar nó!\n");
        return NULL;
    }
    novo_no->valor = valor;
    novo_no->proximo = NULL;
    if (inicio == NULL || valor < inicio->valor)
    {
        novo_no->proximo = inicio;
        return novo_no;
    }
    No *atual = inicio;
    while (atual->proximo != NULL && atual->proximo->valor < valor)
    {
        atual = atual->proximo;
    }
    novo_no->proximo = atual->proximo;
    atual->proximo = novo_no;
    return inicio;
}

int main()
{
    No *lista = NULL;
    int vetor[10] = {5, 8, 1, 3, 7, 0, 6, 4, 2, 9};
    for (int i = 0; i < 10; i++)
    {
        lista = inserir_no(lista, vetor[i]);
    }

    No *atual = lista;
    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
    atual = lista;
    while (atual != NULL)
    {
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    return 0;
}