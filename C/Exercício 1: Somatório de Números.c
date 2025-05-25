/******************************************************************************

Escreva um programa que peça ao usuário um número positivo n. 
Em seguida, calcule a soma dos números de 1 até n.

*******************************************************************************/
#include <stdio.h>

int main(){
    int soma = 0, n;
    printf("Insira um número positivo e será calculado a soma 1 até o número digitado: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        soma += i;
    }
    printf ("A soma é %d\n", soma);
}
