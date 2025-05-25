//Programa que imprime o número espelhado

#include <stdio.h>

int main(){
    int numero, alg1, alg2, alg3;
    printf("Insira um número entre -999 e 999 para que este seja impresso em forma espelhada:\n");
    scanf("%d", &numero);
    if(numero < 1000 && numero > -1000){
        alg1 = numero / 100;
        alg2 = (numero % 100) / 10;
        alg3 = (numero % 100) % 10;
        if (numero < 0){
            alg2 *= -1;
            alg1 *= -1;
        }
        printf("O número %d em sua forma espelhada fica %d%d%d", numero, alg3, alg2, alg1);
    }
    else
        printf("O número que você inseriu não está entre -999 e 999!");
    return 0;
}