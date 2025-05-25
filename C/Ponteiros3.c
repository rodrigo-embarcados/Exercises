/******************************************************************************

Exercício 3: Ponteiro para struct

Declare uma struct Pessoa e um ponteiro para ela. Use malloc para alocar e preencha os dados usando ->. Depois, imprima e libere a memória.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//Estrutura criada
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
    //Alocando na heap um ponteiro para a struct Pessoa
    Pessoa *p1 = malloc(sizeof(Pessoa));
    if (p1 == NULL) //Validando a alocação
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    //Entradas sem validar!
    printf("Insira o nome da pessoa: ");
    scanf("%29s", p1->nome);
    getchar();
    printf("Insira o sexo da pessoa (M ou F): ");
    scanf("%c", &p1->sexo);
    printf("Insira a idade da pessoa: ");
    scanf("%d", &p1->idade);
    printf("Insira a altura da pessoa: ");
    scanf("%f", &p1->altura);
    printf("Insira o peso da pessoa: ");
    scanf("%f", &p1->peso);
    //Agora a impressão
    printf("\n");
    printf("Estes são os dados cadastrados para a pessoa 1:\n\n");
    printf("\tNome: %s\n", p1->nome);
    printf("\tSexo: %c\n", p1->sexo);
    printf("\tIdade: %d anos\n", p1->idade);
    printf("\tAltura: %.2f m\n", p1->altura);
    printf("\tPeso: %.2f kg\n", p1->peso);
    //Liberando a memória!
    free(p1);
    return 0;
}