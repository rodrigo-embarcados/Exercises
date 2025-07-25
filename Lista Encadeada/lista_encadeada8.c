//Lista duplamente encadeada ordenada decrescente

#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *anterior;
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
    novo_no->anterior = NULL;
    if (inicio == NULL || valor > inicio->valor)
    {
        if (inicio != NULL)
            inicio->anterior = novo_no;
        novo_no->proximo = inicio;
        return novo_no;
    }
    No *atual = inicio;
    while (atual->proximo != NULL && atual->proximo->valor > valor)
    {
        atual = atual->proximo;
    }
    novo_no->proximo = atual->proximo;
    if (atual->proximo != NULL)
        atual->proximo->anterior = novo_no;
    novo_no->anterior = atual;
    atual->proximo = novo_no;
    return inicio;
}

void imprimir_proximo(No *inicio)
{
    No *atual = inicio;
    printf("NULL ");
    while (atual != NULL)
    {
        printf("<- %d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

void imprimir_anterior(No *inicio)
{
    No *atual = inicio;
    
    while (atual->proximo != NULL)
        atual = atual->proximo;

    printf("NULL ");
    while (atual != NULL)
    {
        printf("<- %d -> ", atual->valor);
        atual = atual->anterior;
    }
    printf("NULL\n");
}

int main()
{
    No *lista = NULL;
    int vetor[10] = {5, 8, 1, 3, 7, 0, 6, 4, 2, 9};
    for (int i = 0; i < 10; i++)
    {
        lista = inserir_no(lista, vetor[i]);
    }

    imprimir_proximo(lista);
    imprimir_anterior(lista);
    
    No *atual = lista;
    while (atual != NULL)
    {
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    free(lista);
    return 0;
}