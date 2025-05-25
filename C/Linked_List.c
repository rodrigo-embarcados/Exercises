#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    No *proximo;
} No;

int main()
{
    No *primeiro = malloc(sizeof(struct No));
    No *segundo = malloc(sizeof(struct No));
    No *terceiro = malloc(sizeof(struct No));
    
    primeiro->valor = 10;
    primeiro->proximo = segundo;
    segundo->valor = 20;
    segundo->proximo = terceiro;
    terceiro->valor = 30;
    terceiro->proximo = NULL;
    
    struct No *atual = primeiro;
    while(atual != NULL)
    {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
    return 0;
}
