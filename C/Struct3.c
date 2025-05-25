/******************************************************************************

Exercício 3: Função que recebe struct

Crie uma função que receba uma struct Pessoa como parâmetro e imprima seus dados.

*******************************************************************************/
#include <stdio.h>

typedef struct
{
    char nome[20];
    int idade;
    float altura;
} Pessoa;

void imprime_struct(Pessoa *p1)
{
    printf("\tNome: %s\n", p1 -> nome);
    printf("\tIdade: %d anos\n", p1 -> idade);
    printf("\tAltura: %.2f m\n", p1 -> altura);
}

int main()
{
    Pessoa pessoa1 = {"Rodrigo", 37, 1.83};
    printf("A estrutura Pessoa contém:\n\n");
    imprime_struct(&pessoa1);
    return 0;
}