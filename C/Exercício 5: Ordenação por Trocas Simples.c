/******************************************************************************

### **Exercício 5: Ordenação por Trocas Simples**  
Implemente um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Ordene o vetor em ordem crescente usando o método de trocas simples (sem usar bibliotecas ou algoritmos avançados).  
3. Exiba o vetor ordenado.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10] = {2, 3, 5, 7, 9, 4, 5, 2, 1, 6}, temp;
    for(int i = 0; i < 10 - 1; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(vetor[j] > vetor[j + 1])
            {
                temp = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    printf("O vetor ordenado fica: {");
    for(int i = 0; i < 10; i++)
    {
        printf(i < 9 ? "%d, " : "%d}.\n", vetor[i]);
    }
    return 0;
}