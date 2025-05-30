/******************************************************************************

### **Exercício 7: Produtos Cruzados de Vetores**  
Faça um programa que:  
1. Leia dois vetores de 5 números inteiros cada.  
2. Calcule um terceiro vetor onde cada elemento é o produto do elemento do primeiro vetor com o elemento correspondente no segundo vetor.  
   - Exemplo: Para `{1, 2, 3}` e `{4, 5, 6}`, o resultado é `{4, 10, 18}`.  
3. Exiba o vetor resultante. 

*******************************************************************************/
#include <stdio.h>

void fill_array(int vetor[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("\tInsira o %dº número do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int main()
{
    int vetor1[5], vetor2[5], vetor3[5];
    printf("Insira 5 números para preencher o vetor 1: \n");
    fill_array(vetor1);
    printf("Insira 5 números para preencher o vetor 2: \n");
    fill_array(vetor2);
    printf("O produto do vetor 1 com vetor 2 é: {");
    for(int i = 0; i < 5; i++)
    {
        vetor3[i] = vetor1[i] * vetor2[i];
        printf(i < 4 ? "%d, " : "%d}.\n", vetor3[i]);
    }
    return 0;
}