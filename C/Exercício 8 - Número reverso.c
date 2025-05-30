/******************************************************************************

Exercício 8: Número reverso
Escreva um programa que leia um número inteiro positivo e exiba o número com os dígitos invertidos.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int numero;
    printf("Insira um número inteiro com mais de um dígito para ser exibido invertido: ");
    scanf("%d", &numero);
    while(numero != 0){
        printf("%d", numero % 10);
        numero = numero / 10;
    }
    printf("\n");
}