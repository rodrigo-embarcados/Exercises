/******************************************************************************

Exercício 6: Soma dos múltiplos
Escreva um programa que receba dois números inteiros positivos, n e m, e calcule a soma de todos os números múltiplos de m entre 1 e n.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int n, m, mult = 1, soma = 0;
    printf("Insira dois números, n e m e será calculado a soma de todos os múltiplos de m entre 1 e n.\n");
    printf("Qual valor de n? ");
    scanf("%d", &n);
    printf("Qual valor de m? ");
    scanf("%d", &m);
    while((m * mult) <= n){
        soma += (m * mult);
        mult++;
    }
    printf("O resultado da soma é: %d\n", soma);
}
