#include <stdio.h>

int main() {
    float num, guess, prev_guess;
    
    printf("Digite um número: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Não é possível calcular a raiz quadrada de números negativos.\n");
        return 1;  // Retorna 1 para indicar um erro
    }

    guess = num / 2;  // Começa com um palpite inicial de num/2
    prev_guess = 0;

    while (guess != prev_guess) {
        prev_guess = guess;
        guess = 0.5 * (guess + num / guess);
    }

    printf("A raiz quadrada de %.2f é aproximadamente %.4f\n", num, guess);

    return 0;
}