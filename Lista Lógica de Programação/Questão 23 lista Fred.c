//Programa que verifica se o número é par

#include <stdio.h>

int main(){
    int numero;
    printf("Insira um número inteiro e será informado se o mesmo é par:\n");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("O número %d é par!", numero);
    else
        printf("O número %d não é par!", numero);
    return 0;
}