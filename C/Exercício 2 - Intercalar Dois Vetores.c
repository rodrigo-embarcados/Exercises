/*### **Exercício 2: Intercalar Dois Vetores** 
Escreva um programa que: 
1. Leia dois vetores de 5 números inteiros cada. 
2. Crie um terceiro vetor de tamanho 10 que seja a intercalação dos dois primeiros. 
 - Exemplo: `{1, 3, 5, 7, 9}` e `{2, 4, 6, 8, 10}` resultam em `{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}`. 
3. Exiba o terceiro vetor. */

#include <stdio.h>

void fill_array(int vetor[], int j)
{
    for(int i = 0; i < 5; i++)
    {
        printf("Insira o número %d do vetor %d: ", i + 1, j);
        scanf("%d", &vetor[i]);
    }
}

int main()
{
    int vetor1[5], vetor2[5], vetor3[10];
    fill_array(vetor1, 1);
    fill_array(vetor2, 2);
    for(int i = 0; i < 5; i++)
    {
        vetor3[2 * i] = vetor1[i];
        vetor3[2 * i + 1] = vetor2[i];
    }
    printf("Os dois vetores juntos fica: ");
    printf("{");
    for(int i = 0; i < 10; i++)
    {
        printf(i < 9 ? "%d, " : "%d}.\n", vetor3[i]);
    }
    return 0;
}