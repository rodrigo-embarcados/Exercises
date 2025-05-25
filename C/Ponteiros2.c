/******************************************************************************

Exercício 2: Troca de valores

Escreva uma função void trocar(int *a, int *b) que troca o conteúdo de duas variáveis inteiras usando ponteiros.

*******************************************************************************/
#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    trocar(&x, &y);
    printf("O valor de x é %d e de y é %d.\n", x, y);
    return 0;
}