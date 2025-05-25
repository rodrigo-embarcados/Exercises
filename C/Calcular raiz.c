// Programa para calcular raiz quadrada
//Este programa calcula a raiz quadrda de um número através do método
//de Newton-Raphson

#include<stdio.h>

int main(){
    float num, epsilon = 0.000001, guess = 1.0;
    printf("Digite um numero: ");
    scanf("%f", &num);
    
    if (num < 0) {
        printf("Nao eh possivel calcular a raiz quadrada de numeros negativos.\n");
        return 1;
    }
    while ((guess * guess - num) > epsilon || (num - guess * guess) > epsilon) {
        guess = (guess + num / guess) / 2;
    }
    printf("A raiz quadrada de %.2f eh aproximadamente %.4f\n", num, guess);
    return 0;
}