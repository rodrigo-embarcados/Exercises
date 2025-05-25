/******************************************************************************

94. Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo
valor lido e colocar o resultado na própria matriz.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int matriz[6][6], multiplicador;
    printf("Insira um número inteiro: ");
    scanf("%d", &multiplicador);
    srand(time(NULL)); //ou srand(time(NULL) ^ getpid()); para fazer um XOR entre os dois e aumentar a aleatoriedade (no linux!)
    printf("Matriz gerada:\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz multiplicada por %d:\n", multiplicador);
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            matriz[i][j] *= multiplicador;
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}