/******************************************************************************

Exercício 9: Potência sem pow
Escreva um programa que leia dois números inteiros positivos, base e expoente,
e calcule a potência (base^expoente) sem usar funções prontas como pow.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int base, expoente, potencia = 1;
    printf("Insira uma base e um expoente inteiras positivos para calcular a potência:\n");
    printf("\tBase: ");
    scanf("%d", &base);
    printf("\tExpoente: ");
    scanf("%d", &expoente);
    for(int i = 1; i <= expoente; i++)
    {
        potencia *= base;
    }
    printf("\t%d elevado a %d é %d.\n", base, expoente, potencia);
    return 0;
}
