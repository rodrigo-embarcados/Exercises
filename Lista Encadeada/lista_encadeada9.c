//Lista encadeada circular com inserção no fim

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
    if (inicio == NULL)
    {
        novo_no->proximo = novo_no;
        return novo_no;
    }
    No *atual = inicio;
    while (atual->proximo != inicio)
        atual = atual->proximo;
    atual->proximo = novo_no;
    novo_no->proximo = inicio;
    return inicio;
}

int main()
{
    No *lista = NULL;
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        lista = inserir_no(lista, vetor[i]);
    }

    No *atual = lista;
    do
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    } while (atual != lista);
    printf("v\n");
    printf("^--------------------------------------------------\n");

    atual = lista->proximo;
    while (atual != lista) 
    {
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    free(lista);
    return 0;
}