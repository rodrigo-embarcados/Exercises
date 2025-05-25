/******************************************************************************

1. Escreva um programa que leia duas strings e as coloque na tela. Imprima também
a segunda letra de cada string.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[7], string2[7];
    printf("Insira um número cardinal de um a dez: ");
    scanf("%s", string1);
    printf("Agora insira outro número cardinal de um a dez: ");
    scanf("%s", string2);
    printf("O primeiro número digitado foi: %s.\n", string1);
    printf("A segunda letra dele é: %c.\n", string1[1]);
    printf("O segundo número digitado foi: %s.\n", string2);
    printf("A segunda letra dele é: %c.\n", string2[1]);
    return 0;
}