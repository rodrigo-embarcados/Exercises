#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, passos = 0;
    printf("Insira um número inteiro maior que zero para o cálculo da sequência de Collatz: ");
    scanf("%d", &numero);
    while (numero <= 0){
        printf("Insira um número maior que zero! ");
        scanf("%d", &numero);
    }
    while(numero > 1){
        if (numero % 2 == 0){
            numero = numero / 2;
            passos++;
            }
        else{
            numero = (numero * 3) + 1;
            passos++;
            }
        printf("%d ", numero);
    }
    printf("\n");
    printf("Foram necessários %d passos.\n", passos);
}