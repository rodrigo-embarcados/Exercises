//Programa para imprimir o fatorial de um numero dado
#include <stdio.h>

int main(){
    long long int numero, fatorial = 1;
    printf("Insira um numero para calcular seu fatorial:\n");
    scanf("%lld", &numero);
    if (numero >= 0){
        for (int i = 1; i <= numero; i++){
            fatorial *= i;
        }
    printf("O fatorial de %lld eh: %lld\n", numero, fatorial);
    }
    else
    printf("Nao existe fatorial de numero menor que zero!\n");
    return 0;
}