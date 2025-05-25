/******************************************************************************

Exercício 3 — Média entre estruturas
Objetivo: Calcular a média entre valores armazenados em duas structs, e guardar o resultado em uma terceira struct.
Enunciado:
Crie uma estrutura chamada Notas, com os campos:
    float prova1
    float prova2
Depois:
    Declare duas variáveis do tipo Notas: aluno1 e aluno2
    Preencha os campos com valores diferentes
    Crie uma terceira variável chamada media
    Em media.prova1, armazene a média das prova1 dos dois alunos
    Em media.prova2, a média das prova2 dos dois alunos
    Mostre os valores armazenados na struct media

*******************************************************************************/
#include <stdio.h>

typedef struct {
        float prova1;
        float prova2;
    } Notas;

int main()
{
    Notas aluno1 = {6.5, 7.2};
    Notas aluno2 = {8.8, 9.1};
    Notas media;
    media.prova1 = ((aluno1.prova1 + aluno2.prova1) / 2);
    media.prova2 = ((aluno1.prova2 + aluno2.prova2) / 2);
    printf("A média da nota dos alunos na prova 1 foi %.2f e na prova 2 foi %.2f.\n", media.prova1, media.prova2);
    return 0;
}
