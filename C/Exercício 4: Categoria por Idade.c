/******************************************************************************

Exercício 4: Categoria por Idade

Escreva um programa que classifique pessoas em categorias:

    Criança (0-12 anos), Adolescente (13-17 anos), Adulto (18-59 anos), Idoso (60+ anos).
    Desafio: Tente fazer isso sem usar mais que três if-else blocos.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Insira sua idade para obter a classificação: ");
    scanf("%d", &idade);
    if(idade >= 60) 
        printf("Idoso.\n");
    else if(idade >= 13) 
        printf((idade >= 18) ? "Adulto.\n" : "Adolescente.\n");
    else
        printf((idade < 0) ? "Idade inválida." : "Crianca.\n");
    return 0;
}