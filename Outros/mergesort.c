#include <stdio.h>

void merge(int vetor[], int esquerda, int meio, int direita) 
{
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;
    int esquerda_temp[n1], direita_temp[n2];
    for (int i = 0; i < n1; i++) 
    {
        esquerda_temp[i] = vetor[esquerda + i];
    }
    for (int j = 0; j < n2; j++) 
    {
        direita_temp[j] = vetor[meio + 1 + j];
    }

    int i = 0, j = 0, k = esquerda;
    while (i < n1 && j < n2) 
    {
        if (esquerda_temp[i] <= direita_temp[j]) 
        {
            vetor[k++] = esquerda_temp[i++];
        }
        else 
        {
            vetor[k++] = direita_temp[j++];
        }
    }

    while (i < n1) 
    {
        vetor[k++] = esquerda_temp[i++];
    }
    while (j < n2) 
    {
        vetor[k++] = direita_temp[j++];
    }
}

void mergeSort(int vetor[], int esquerda, int direita) 
{
    if (esquerda < direita) 
    {
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio + 1, direita);
        merge(vetor, esquerda, meio, direita);
    }
}

int main() 
{
    int vetor[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    printf("Vetor original: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    mergeSort(vetor, 0, n - 1);
    printf("Vetor ordenado: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
