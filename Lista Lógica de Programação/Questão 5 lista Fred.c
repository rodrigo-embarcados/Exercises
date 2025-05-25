//Este programa lê um número inteiro e exibe o seu sucessor

#include <stdio.h>

int main(){
    int numero, sucessor;
    printf("Insira um número inteiro para exibir o seu sucessor:\n");
    scanf("%d", &numero);
    sucessor = numero + 1;
    printf("O sucessor de %d é %d!\n", numero, sucessor);
    return 0;
    }