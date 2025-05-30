/******************************************************************************

Exercício 1: Soma de Digitos
Descrição:
Crie um programa que calcule a soma dos dígitos de um número inteiro. 
O programa deve continuar pedindo números inteiros ao usuário até que um número negativo seja inserido. 
Quando isso ocorrer, o programa deve calcular a soma dos dígitos de cada número inserido e exibir a soma total.

*******************************************************************************/
#include <stdio.h>

int main(){
    int numero = 0, soma = 0, aux = 0;
    while (numero >= 0){
        printf("Insira um número maior que zero para calcular a soma dos seus dígitos. Para parar, insira um número negativo: ");
        scanf("%d", &numero);
        while (numero > 0){
            aux = numero % 10; //Nem precisava dessa variável, poderia ser acumulado soma += numero % 10
            numero /= 10;
            soma += aux;
        }
    }
    printf("A soma dos dígitos de todos inteiros positivos digitados é: %d.", soma);
}