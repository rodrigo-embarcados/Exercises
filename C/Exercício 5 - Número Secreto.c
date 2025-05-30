/******************************************************************************

Exercício 5: Número Secreto
Crie um programa em que o usuário deve adivinhar um número secreto (pré-definido no código). 
O programa deve continuar solicitando tentativas até que o usuário acerte.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int segredo = 9, tentativa;
    printf("Insira um número para tentar adivinhar o número secreto: ");
    scanf("%d", &tentativa);
    while(segredo != tentativa){
        printf("Número incorreto! Tente mais uma vez: ");
        scanf("%d", &tentativa);
    }
    printf("Parabéns!, você acertou!\n");
}
