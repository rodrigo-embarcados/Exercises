#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float a, b;
    char operador;
    printf("Insira um operador entre +, -, * ou /:\n");
    scanf("%c", &operador);
    printf("Agora insira dois números para calcular:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    switch (operador){
        case '+':
            printf("O resultado da soma é: %.2f", a+b);
            break;
        case '-':
            printf("O resultado da subtração é: %.2f", a-b);
            break;
        case '*':
            printf("O resultado da multiplicação é: %.2f", a*b);
            break;
        case '/':
            printf("O resultado da divisão é: %.2f", a/b);
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }
    return 0;
}
