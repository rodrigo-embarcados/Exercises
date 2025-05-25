/******************************************************************************

1. Faça um programa que carregue e imprima um vetor com o seu nome
(nome completo) e o total de letras que ele possui.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[100];
    int cont = 0, pos = 0;
    printf("Insira seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    printf("O nome digitado foi: %s", nome);
    while(nome[pos] != '\n')
    {
        if(nome[pos] != ' ') cont++;
        pos++;
    }
    printf("O nome digitado tem %d caracteres.\n", cont);
    return 0;
}