#include <stdio.h>
#include <stdlib.h>

int menor(int a, int b, int c) {
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return menor;
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int resultado = menor(num1, num2, num3);
    
    printf("O menor número é: %d\n", resultado);
    
    return 0;
}
