/******************************************************************************

### **Exercício 4: Compactar um Vetor**  
Crie um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Remova todos os elementos iguais a zero, deslocando os outros valores para a esquerda e preenchendo as posições restantes com -1.  
   - Exemplo: `{1, 0, 2, 0, 3}` se torna `{1, 2, 3, -1, -1}`.  
3. Exiba o vetor resultante.  

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10] = {1, 0, 2, 4, 0, 5, 9, 8, 0, 8}, temp;
    for(int i = 0; i < 10; i++)
    {
        int j = i + 1; // Inicializo uma variável com a próxima posição
        if(vetor[i] == 0) // Testo se a posição atual tem valor zero
        {
           while(j < 10) // Loop para buscar até o fim do vetor
           {
               if(vetor[j]) // Testo se a próxima posição é diferente de zero. Se for, faço a troca dos valores usando uma variável temporária
               {
                   temp = vetor[j];
                   vetor[j] = vetor[i];
                   vetor[i] = temp;
                   break;
               }
               j++; // Se não for, testo a próxima + 1.
           } 
        }
    }
    printf("O vetor resultante é: {");
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == 0)
        {
            vetor[i] = -1;
        }
        printf(i < 9 ? "%d, ": "%d}.\n", vetor[i]);
    }
    return 0;
}