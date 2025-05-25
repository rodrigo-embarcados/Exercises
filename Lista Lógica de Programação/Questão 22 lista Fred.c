//Programa que imprime o módulo de um número dado

#include <stdio.h>

int main(){
    float numero, modulo;
    printf("Insira um número para imprimir o seu módulo:\n");
    scanf("%f", &numero);
    if (numero >= 0)
        printf("O módulo de %.2f é %.2f!", numero, numero);
    else {
        modulo = numero * (-1);
        printf("O módulo de %.2f é %.2f", numero, modulo);
    }
    return 0;
}
