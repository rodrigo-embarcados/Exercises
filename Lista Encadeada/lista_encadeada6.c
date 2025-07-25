//Lista duplamente encadeada com inserção no fim

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
    novo_no->proximo = NULL;
    if (inicio == NULL)
        return novo_no;
    No *atual = inicio;
    while (atual->proximo != NULL)
        atual = atual->proximo;
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
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
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