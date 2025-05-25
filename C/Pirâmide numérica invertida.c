/* 8. Pirâmide numérica invertida
Escreva um programa que leia um número n e imprima uma pirâmide numérica invertida com n linhas*/

#include <stdio.h>

int main(){
    int n, aux;
    printf("Insira um inteiro positivo n e será impresso uma pirâmide invertida com n linhas: ");
    scanf("%d", &n);
    aux = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= aux; j++){
            printf("%d ", j);
        }
        printf("\n");
        aux--;
    }
}