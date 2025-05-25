/******************************************************************************

Exercício 2 — Cadastro simples
Objetivo: Criar uma estrutura com campos de texto e numérico, preencher manualmente e mostrar o resultado.
Enunciado:
Crie uma estrutura chamada Pessoa, com os campos:
    char nome[50]
    int idade
    float altura
Depois:
    Declare uma variável chamada p1
    Atribua manualmente valores aos campos
    Mostre na tela o nome, a idade e a altura da pessoa com printf
    Dica: Use strcpy(p1.nome, "João"); para atribuir texto.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    struct Pessoa {
        char nome[50];
        int idade;
        float altura;
    };
    struct Pessoa p1;
    strcpy(p1.nome, "Rodrigo");
    p1.idade = 37;
    p1.altura = 1.83;
    printf("A struct pessoa contém:\n\n");
    printf("\t Nome: %s\n", p1.nome);
    printf("\t Idade: %d anos\n", p1.idade);
    printf("\t Altura: %.2f m\n", p1.altura);
    return 0;
}