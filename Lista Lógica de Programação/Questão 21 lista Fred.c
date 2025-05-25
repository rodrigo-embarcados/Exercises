//Programa que informa se número é positivo ou negativo

#include <stdio.h>

int main(){
    float numero;
    printf("Insira um número e será informado se o mesmo é negativo ou positivo:\n");
    scanf("%f", &numero);
    if (numero){
        if (numero > 0)
        printf("O número %.2f é positivo!", numero);
        else
        printf("O número %.2f é negativo!", numero);
    }
    else
        printf("O numero %f não é positivo nem negativo!", numero);
    return 0;
}