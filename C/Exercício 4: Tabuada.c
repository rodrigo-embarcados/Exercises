/******************************************************************************

Exercício 4: Tabuada
Solicite um número inteiro x e mostre sua tabuada de 1 a 10.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Insira um número inteiro e será exibido sua tabuada: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        printf("%2d x %2d = %3d\n", n, i, n*i);
    }
}