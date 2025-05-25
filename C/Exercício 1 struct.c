/******************************************************************************

Exercício 1 — Soma de números

Objetivo: Definir uma estrutura Numeros, declarar duas variáveis, preencher seus campos e somar os campos correspondentes.
Enunciado:
Crie uma estrutura chamada Numeros com dois campos:
    int inteiro
    float decimal
Depois:
    Declare duas variáveis do tipo struct Numeros, chamadas n1 e n2
    Atribua a elas valores diferentes nos campos inteiro e decimal
    Calcule e mostre na tela:
        A soma dos dois campos inteiro
        A soma dos dois campos decimal

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct Numeros {
        int inteiro;
        float decimal;
    } n1, n2;
    n1.inteiro = 1;
    n1.decimal = 1.1;
    n2.inteiro = 2;
    n2.decimal = 2.2;
    printf("A soma dos dois campos \"inteiro\" da struct Numeros é: %d.\n", n1.inteiro + n2.inteiro);
    printf("A soma dos dois campos \"decimal\" da struct Numeros é: %.2f.\n", n1.decimal + n2.decimal);
    return 0;
}