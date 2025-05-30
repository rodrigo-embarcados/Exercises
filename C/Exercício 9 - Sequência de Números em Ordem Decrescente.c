/******************************************************************************

Exercício 9: Sequência de Números em Ordem Decrescente
Descrição:
Crie um programa que receba dois números inteiros a e b, e imprima os números de a até b em ordem decrescente. 
Caso a seja menor que b, imprima a mensagem "Valores inválidos".

*******************************************************************************/
#include <stdio.h>

int main(){
    int a, b;
    printf("Insira 2 números e será impresso a sequência decrescente entre eles. O primeiro deve ser maior que o segundo: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b) printf("Valores inválidos!\n");
    else{
        for(int i = a; i >= b; i--){ 
            printf ("%d\n", i);
        }
    }
}
