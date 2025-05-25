/******************************************************************************

Exercício 10: Números perfeitos
Um número é chamado de "perfeito" se a soma de seus divisores (exceto ele mesmo) for igual a ele. 
Escreva um programa que leia um número inteiro positivo e determine se ele é um número perfeito.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int numero, soma = 0;
    printf("Insira um inteiro positivo para verificar se ele é perfeito: ");
    scanf("%d", &numero);
    for(int i = 1; i <= numero / 2; i++){
        if(numero % i == 0) soma += i;
    }
    printf((soma == numero) ? "%d é perfeito!\n" : "%d não é perfeito.\n", numero);
}
