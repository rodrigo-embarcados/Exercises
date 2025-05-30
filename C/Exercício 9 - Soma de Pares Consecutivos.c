/******************************************************************************

### **Exercício 9: Soma de Pares Consecutivos**  
Crie um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Calcule a soma de todos os pares consecutivos no vetor.  
   - Exemplo: Para `{1, 2, 3, 4}`, o programa calcula \( 1+2 \), \( 2+3 \), \( 3+4 \), resultando em `{3, 5, 7}`.  
3. Exiba o vetor resultante.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("A soma dos pares do vetor é: {");
    for(int i = 0; i < 9; i++)
    {
        printf(i < 8 ? "%d, " : "%d}.\n", vetor[i] + vetor[i + 1]);
    }
    return 0;
}
