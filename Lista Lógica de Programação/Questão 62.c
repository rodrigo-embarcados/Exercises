/*
Questão 62
*/
#include <stdio.h>

int main() {
    int vetor[10], cont = 0;

    printf("Insira 10 números para preencher o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            vetor[cont] = vetor[i]; // Sobrescreve diretamente no início do vetor
            cont++;
        }
    }

    if (cont) {
        printf("Os números pares do vetor são: {");
        for (int i = 0; i < cont; i++) {
            printf(i < cont - 1 ? "%d, " : "%d}\n", vetor[i]);
        }
        printf("Há %d número(s) par(es) no vetor.\n", cont);
    } else {
        printf("Não há números pares no vetor.\n");
    }

    return 0;
}