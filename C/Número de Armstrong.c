/******************************************************************************

2. Número de Armstrong

Um número inteiro é chamado de número de Armstrong (ou narcisista) se a soma de seus dígitos elevados à potência do número de dígitos for igual ao próprio número. 

Escreva um programa que leia um número inteiro positivo e determine se ele é um número de Armstrong.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    
    int num1, num2, numero, digitos = 0, soma = 0, aux;
    printf("Insira um número inteiro positivo para verificar se é um número de Armstrong: ");
    scanf("%d", &numero);
    num1 = num2 = numero;
    while(num1 > 0){
        num1 /= 10;
        digitos++;
    }
    while(num2 > 0){
        aux = num2 % 10;
        soma += pow(aux, digitos);
        num2 /= 10;
    }
    if(soma == numero){
        printf("%d é um número de Armstrong.", numero);
    }
    else{
        printf("%d não é um número de Armstrong.", numero);
    }
    return 0;
}
