#include <stdio.h>

#define POS 20

int ver_seq(int vetor[], int x)
{
    for (int i = 0; i < POS; i++)
    {
        if (vetor[i] == x)
        {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int vetor[POS], termo;
    for (int i = 0; i < POS; i++)
    {
        vetor[i] = 0;
    }
    for (int i = 1; i < POS; i++)
    {
        termo = vetor[i - 1] - i;
        if (termo > 0 && ver_seq(vetor, termo)) vetor[i] = termo;
        else vetor[i] = vetor[i - 1] + i;
    }
    printf("Eis a série de Recamán até o %dº termo: {", POS);
    for (int i = 0; i < POS; i++)
    {
        printf(i < POS - 1 ? "%d, " : "%d}.\n", vetor[i]);
    }
    return 0;
}