---

### **Exercício 1: Soma dos Elementos do Vetor**  
Crie um programa em C que:  
1. Solicite ao usuário o tamanho do vetor (máximo de 10 elementos).  
2. Leia os valores do vetor do teclado.  
3. Calcule e exiba a soma de todos os elementos do vetor.  

---

#include<stdio.h>

#define MAX 10

int main()
{
    int vetor[MAX], soma = 0, tam;
    printf("Insira um tamanho máximo para o vetor até %d: ", MAX);
    scanf("%d", &tam);
    printf("Agora insira os %d números do vetor: \n", tam);
    for(int i = 0; i < tam; i++)
    {
        printf("\tInsira o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);    
    }
    for(int i = 0; i < tam; i++) soma += vetor[i];
    printf("O valor da soma dos elementos do vetor é: %d.\n", soma);
}


### **Exercício 2: Maior e Menor Elemento do Vetor**  
Crie um programa que:  
1. Solicite ao usuário o tamanho do vetor (máximo de 10 elementos).  
2. Leia os valores do vetor do teclado.  
3. Determine e exiba o maior e o menor elemento do vetor.  

---

#include<stdio.h>

#define MAX 10

int main()
{
    int vetor[MAX], tam, maior, menor;
    printf("Insira um tamanho máximo para o vetor até %d: ", MAX);
    scanf("%d", &tam);
    printf("Agora insira os %d números do vetor: \n", tam);
    for(int i = 0; i < tam; i++)
    {
        printf("\tInsira o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);    
    }
    maior = menor = vetor[0];
    for(int i = 1; i < tam; i++)
    {
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];

    }
    printf("O maior valor do vetor é %d e o menor é: %d.\n", maior, menor);
}

### **Exercício 3: Média dos Elementos do Vetor**  
Escreva um programa que:  
1. Leia um vetor de 10 elementos inteiros.  
2. Calcule e exiba a média aritmética dos valores.  

---

#include<stdio.h>


int main()
{
    int vetor[10], soma = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("\tInsira o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);    
    }
    for(int i = 0; i < 10; i++) soma += vetor[i];
    printf("O valor da media dos elementos do vetor é: %.2f.\n", (float)soma/10);
}

### **Exercício 4: Contagem de Números Pares e Ímpares**  
Escreva um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Conte e exiba quantos números pares e quantos números ímpares existem no vetor.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, par = 0;
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] % 2 == 0) par++; 
    }
    printf("Há %d números pares e %d números ímpares.\n", par, 10 - par);
}

### **Exercício 5: Valores Negativos no Vetor**  
Crie um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Conte e exiba quantos números negativos existem no vetor.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {-5, -7, 8, 5, 3, -1, -3, 0, 4, -4}, negativo = 0;
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] < 0) negativo++; 
    }
    printf("Há %d negativos no vetor.\n", negativo);
}

### **Exercício 6: Vetor Invertido**  
Faça um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Exiba os elementos do vetor na ordem inversa à leitura.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Vetor invertido: {");
    for(int i = 9; i > -1; i--)
    {
        printf(i > 0 ? "%d, " : "%d}.\n", vetor[i]);
    }
}

### **Exercício 7: Frequência de um Valor no Vetor**  
Escreva um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Peça ao usuário um número.  
3. Informe quantas vezes esse número aparece no vetor.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {3, 3, 3, 5, 6, 7, 9, 0, 0, 2}, num, cont = 0;
    printf("Insira um número e será exibido quantas vezes ele aparece no vetor: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == num) cont++;
    }
    printf("O número %d aparece %d vezes vetor.\n", num, cont);
}

### **Exercício 8: Substituir Números Negativos por Zero**  
Crie um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Substitua todos os valores negativos por zero.  
3. Exiba o vetor modificado.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {-5, -7, 8, 5, 3, -1, -3, 0, 4, -4};
    printf("Vetor modificado: {");
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] < 0) vetor[i] = 0;
        printf(i < 9 ? "%d, " : "%d}.\n", vetor[i]);
    }
}


### **Exercício 9: Soma dos Elementos em Índices Pares**  
Escreva um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Calcule e exiba a soma dos elementos que estão em índices pares (0, 2, 4, etc.).  

---

#include<stdio.h>


int main()
{
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, soma = 0;
    for(int i = 0; i < 10; i+=2) soma += vetor[i];
    printf("O valor da soma dos elementos pares do vetor é: %d.\n", soma);
}

### **Exercício 10: Verificar Ordem Crescente**  
Crie um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Verifique se os números estão em ordem crescente.  
3. Exiba "Sim" se estiverem em ordem crescente, ou "Não" caso contrário.  

---

#include<stdio.h>

int main()
{
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, cres = 1, cont = 0;
    while(cont < 9)
    {
        if(vetor[cont] > vetor[cont + 1])
        {
            cres = 0;
            break;
        }
        cont++;
    }
    printf(cres ? "Sim" : "Não");
}