/******************************************************************************

Questão 2 prova 2 2024.1

*******************************************************************************/
#include <stdio.h>

void fill_window(int x, int y, int vetor[])
{
    for(int i = x; i < x + y; i++)
    {
        vetor[i] = 1;
    }
}

int main()
{
    int janela[600], vidro1_inicio, vidro2_inicio, vidro3_inicio, vidro1_comp, vidro2_comp, vidro3_comp, aberta = 0;
    for(int i = 0; i < 600; i++)
    {
        janela[i] = 0;
    }
    printf("Insira a posição da folha de vidro 1, entre 0 e 600: ");
    scanf("%d", &vidro1_inicio);
    printf("Agora insira o comprimento da folha de vidro 1, entre 1 e 600: ");
    scanf("%d", &vidro1_comp);
    printf("Insira a posição da folha de vidro 2, entre 0 e 600: ");
    scanf("%d", &vidro2_inicio);
    printf("Agora insira o comprimento da folha de vidro 2, entre 1 e 600: ");
    scanf("%d", &vidro2_comp);
    printf("Insira a posição da folha de vidro 3, entre 0 e 600: ");
    scanf("%d", &vidro3_inicio);
    printf("Agora insira o comprimento da folha de vidro 3, entre 1 e 600: ");
    scanf("%d", &vidro3_comp);
    fill_window(vidro1_inicio, vidro1_comp, janela);
    fill_window(vidro2_inicio, vidro2_comp, janela);
    fill_window(vidro3_inicio, vidro3_comp, janela);
    for(int i = 0; i < 600; i++)
    {
        if(janela[i] == 0) aberta++;
    }
    printf("A área da janela aberta é de %d cm².\n", aberta * 100);
    return 0;
}