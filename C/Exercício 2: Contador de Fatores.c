/******************************************************************************

Exercício 2: Contador de Fatores
Descrição:
Crie um programa que receba um número inteiro positivo e encontre quantos divisores ele tem, 
ou seja, quantos números podem dividir esse número sem deixar resto. 
O programa deve imprimir a quantidade de divisores do número.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int numero, contador = 0, divisor = 0, i;
    printf("Insira um inteiro positivo e será exibido quantos divisores ele tem: ");
    scanf("%d", &numero);
    for(i = 1; i <= numero / 2; i++){
        divisor = 0;
        if(numero % i == 0) contador++;
    }
    printf("O número %d tem %d divisores.", numero, contador + 1);
}
