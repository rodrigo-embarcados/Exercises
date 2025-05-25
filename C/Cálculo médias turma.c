#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    float media, perc_aprov, temp, notas = 0, aprovado = 0;
    int alunos;
    printf("Insira a quantidade de alunos da turma:\n");
    scanf("%d", &alunos);
    printf("Insira as notas de todos alunos:\n");
    for (int i = 1; i <= alunos; i++)
    {
        scanf("%f", &temp);
        if (temp >= 7.0){
            aprovado++;
        }
        notas = notas + temp;
    }
    media = notas / alunos;
    perc_aprov = (aprovado / alunos) * 100;
    printf("A média da turma é %.2f\n", media);
    printf("A porcentagem de alunos aprovados é de %.2f%%\n", perc_aprov);
}