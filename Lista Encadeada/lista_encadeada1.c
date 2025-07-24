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
    novo_no->proximo = inicio;
    return novo_no;
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