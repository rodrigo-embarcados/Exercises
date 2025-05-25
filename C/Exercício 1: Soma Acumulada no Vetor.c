/*### **Exercício 1: Soma Acumulada no Vetor** 
Crie um programa que: 
1. Leia um vetor de 10 números inteiros. 
2. Crie um novo vetor onde cada posição contém a soma acumulada dos valores anteriores e do próprio valor no vetor original. 
 - Exemplo: Para o vetor `{1, 2, 3, 4}`, o vetor acumulado será `{1, 3, 6, 10}`. 
3. Exiba o vetor acumulado. */
#include <stdio.h>

int main()
{
 int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int soma = 0;
 printf("A soma acumulada por posição do vetor 1 é: {");
 for(int i = 0; i < 10; i++)
 {
     soma += vetor1[i];
     vetor1[i] = soma;
     printf(i < 9 ? "%d, " : "%d}.\n", vetor1[i]);
 }
}