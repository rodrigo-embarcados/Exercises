/******************************************************************************

### **Exercício 6: Elementos Únicos no Vetor**  
Escreva um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Crie um segundo vetor contendo apenas os elementos que não se repetem no vetor original.  
   - Exemplo: Para o vetor `{1, 2, 2, 3, 4, 4, 5}`, o segundo vetor será `{1, 3, 5}`.  
3. Exiba o vetor resultante.  

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor1[10] = {1, 2, 2, 3, 6, 5, 7, 8, 3, 1}, vetor2[10], cont, pos = 0;
    for(int i = 0; i < 10; i++)
    {
        cont = 0;
        for(int j = 0; j < 10; j++)
        {
            if(vetor1[i] == vetor1[j]) cont++;
        }
        if(cont < 2)
        {
            vetor2[pos] = vetor1[i];
            pos++;
        }
        
    }
    printf("O(s) elemento(s) único(s) do vetor são(é): {");
    for(int i = 0; i < pos; i++)
    {
        printf(i < pos - 1 ? "%d, " : "%d}.\n", vetor2[i]);
    }
}