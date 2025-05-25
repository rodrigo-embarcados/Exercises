/******************************************************************************

Exercício 2: Vetor de structs com malloc

Peça ao usuário a quantidade de pessoas a serem cadastradas. 
Use malloc para alocar dinamicamente um vetor de Pessoa e preencha os dados via teclado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    char sexo;
    int idade;
    float altura;
    float peso;
} Pessoa;

int main()
{
    int qntd;
    printf("Insira a quantidade de pessoas cadastradas: ");
    scanf("%d", &qntd);
    Pessoa *vetor = malloc(qntd * sizeof(Pessoa));
    if(vetor == NULL)
    {
        printf("Erro ao alocar memória!\n");
    }
    for(int i = 0; i < qntd; i++)
    {
        printf("Insira o nome: ");
        scanf("%29s", vetor[i].nome);
        getchar();
        printf("Insira o sexo: ");
        scanf("%c", &vetor[i].sexo);
        printf("Insira a idade: ");
        scanf("%d", &vetor[i].idade);
        printf("Insira a altura: ");
        scanf("%f", &vetor[i].altura);
    }
    free(vetor);
    return 0;
}