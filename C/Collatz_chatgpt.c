#include <stdio.h>
#include <stdlib.h>

void collatz_sequence(int numero) {
    int passos = 0;
    printf("Sequência de Collatz para %d: ", numero);

    while (numero > 1) {
        printf("%d -> ", numero);
        numero = (numero % 2 == 0) ? numero / 2 : 3 * numero + 1;
        passos++;
    }
    printf("1\n"); // Finaliza a sequência com 1
    printf("Foram necessários %d passos.\n", passos);
}

int main() {
    int numero;

    printf("Insira um número inteiro maior que zero para o cálculo da sequência de Collatz: ");
    while (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Entrada inválida! Insira um número inteiro maior que zero: ");
        while (getchar() != '\n'); // Limpa o buffer do stdin
    }

    collatz_sequence(numero);
    return 0;
}
