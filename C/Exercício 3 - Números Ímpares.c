/******************************************************************************

Exercício 3: Números Ímpares
Peça ao usuário um número inteiro positivo n e exiba todos os números ímpares de 1 até n.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Insira um número inteiro positivo n e será exbido todo os ímpares de 1 até n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0) printf ("%d ", i);
    }
}