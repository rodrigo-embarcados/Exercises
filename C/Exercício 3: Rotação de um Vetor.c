/******************************************************************************

### **Exercício 3: Rotação de um Vetor**  
Faça um programa que:  
1. Leia um vetor de 10 números inteiros.  
2. Solicite ao usuário um número \( N \).  
3. Gire o vetor para a esquerda \( N \) posições.  
   - Exemplo: Para o vetor `{1, 2, 3, 4, 5}` e \( N = 2 \), o resultado será `{3, 4, 5, 1, 2}`.  
4. Exiba o vetor resultante.  

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], n, cont = 0;
    printf("Insira 10 números inteiros para preencher um vetor:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("\t Insira o número %2d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Agora insira um número de 0 a 9 para girar o vetor a esquerda: ");
    scanf("%d", &n);
    printf("O vetor ficou assim: {");
    for(int i = 0; i < 10; i++)
    {
        if(i + n > 9) // testa se já chegou na última posição do vetor para imprimir as posições iniciais faltantes
        {
            printf(i < 9 ? "%d, " : "%d}.", vetor[cont]); //imprime condicionalmente o número com vírgula ou o número com }.
            cont++;
        }
        else
        {
            printf("%d", vetor[i + n]); // poderia ter sido feito printf(i < 9 ? "%d, " : "%d}.", vetor[(i + n) % 10]); e não usar variável cont e nem if/else.
            printf(", ");
        }
    }
    return 0;
}