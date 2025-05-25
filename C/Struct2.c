/******************************************************************************

Exercício 2: Vetor de structs

Declare um vetor de 3 structs Pessoa. Preencha manualmente os dados de cada uma e imprima todas.

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
    Pessoa pessoas[3] = 
    {
        {"Rodrigo", 37, 1.83},
        {"Lucas", 23, 1.80},
        {"Ravena", 35, 1.50}
    };
    printf("O vetor pessoas da estrutura Pessoa contém:\n\n");
    for(int i = 0; i < 3; i++)
    {
        printf("\tPessoa %d: Nome: %s | Idade: %d anos | Altura: %.2f m\n", i + 1, pessoas[i].nome, pessoas[i].idade, pessoas[i].altura);
    }
    return 0;
}
