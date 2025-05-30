/******************************************************************************

Exercício 2: Classificação de Notas

Crie um programa que classifique notas em letras:

    A (90-100), B (80-89), C (70-79), D (60-69), F (abaixo de 60).
    Desafio: Não use muitos if-else; tente combinar condições matemáticas para reduzir a lógica.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    printf("Insira sua nota de 0 a 100 para obter a classificação: ");
    scanf("%d", &nota);
    if (nota < 0 || nota > 100){
        printf("Insira uma nota de 0 a 100. Valor digitado inválido!\n");
        return 1;
    }
    if(nota >= 90) 
        printf("Classificação A.\n");
    else if(nota >= 80) 
        printf("Classificação B.\n");
    else if(nota >= 70) 
        printf("Classificação C.\n");
    else if(nota >= 60) 
        printf("Classificação D.\n");
    else 
        printf("Classificação F.\n");
    return 0;
}