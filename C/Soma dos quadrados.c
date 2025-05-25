/******************************************************************************

1. Soma dos quadrados

Leia dois números inteiros positivos a e b (a < b) e calcule a soma dos quadrados de todos os números no intervalo [a, b], inclusive.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int a, b, soma = 0;
    printf("Insira 2 números inteiros, o 1º > 2º, e será dado a soma dos quadrados do intervalo, com eles inclusos: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        soma += (i * i);
    }
    printf("A soma dos quadrados dos números de %d a %d é: %d.", a, b, soma);
}
