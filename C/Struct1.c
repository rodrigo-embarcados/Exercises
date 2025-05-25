/******************************************************************************

Exercício 1: Cadastro simples

Crie uma struct chamada Pessoa com os campos nome (string), idade (int) e altura (float). No main, preencha os dados de uma pessoa e mostre na tela.

*******************************************************************************/
#include <stdio.h>

typedef struct
{
    char nome[20];
    int idade;
    float altura;
} Pessoa;

int main()
{
    Pessoa pessoa1 = {"Rodrigo", 37, 1.83};
    printf("A estrutura Pessoa contém:\n\n");
    printf("\tNome: %s\n", pessoa1.nome);
    printf("\tIdade: %d anos\n", pessoa1.idade);
    printf("\tAltura: %.2f m\n", pessoa1.altura);
    return 0;
}