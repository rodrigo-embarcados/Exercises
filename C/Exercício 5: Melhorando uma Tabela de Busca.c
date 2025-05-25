/******************************************************************************

Exercício 5: Melhorando uma Tabela de Busca
Um programa que recebe o código de um produto (1 a 5) e retorna seu preço:

1: R$ 10, 2: R$ 15, 3: R$ 20, 4: R$ 25, 5: R$ 30.
Desafio: Use um array em vez de if-else ou switch.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int preco[6] = {0, 10, 15, 20, 25, 30};
    int codigo;
    printf("Insira o código do produto para exibir seu preço: ");
    scanf("%d", &codigo);
    printf("O preço do produto é %d.\n", preco[codigo]);
    return 0;
}
