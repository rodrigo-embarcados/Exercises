/******************************************************************************

Exercício 1: Modificando valor com ponteiro

Crie uma função void dobrar(int *x) que dobra o valor apontado por x. Teste no main.

*******************************************************************************/
#include <stdio.h>

void dobrar(int *x)
{
    *x *= 2;
}

int main()
{
    int a;
    printf("Insira um número para exibir o seu dobro: ");
    scanf("%d", &a); // Não estou validando a entrada
    dobrar(&a);
    printf("O dobro do número digitado é %d.", a);
    return 0;
}