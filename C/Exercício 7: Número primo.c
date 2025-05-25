/******************************************************************************

Exercício 7: Número primo
Escreva um programa que leia um número inteiro positivo e determine se ele é primo ou não. 
Um número é primo se for maior que 1 e divisível apenas por 1 e por ele mesmo.

*******************************************************************************/
#include<stdio.h>

int main(){
    
    int numero, ehPrimo = 1, i = 2;
    printf("Insira um numero para verificar se o mesmo é primo: ");
    scanf("%d", &numero);
    if (numero <= 1)
        ehPrimo = 0;
    while (ehPrimo == 1 && i * i <= numero){
        if (numero % i == 0){
            ehPrimo = 0;
            break;
        }
        i++;
    }
    if (ehPrimo == 1) printf("%d é primo\n", numero);
    else printf("%d não é primo\n", numero);
}
