/******************************************************************************

93. Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir
o programa deverá calcular a soma dos valores que compõem a diagonal principal e a
diagonal secundária da matriz.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int matriz[5][5], somadiag_p = 0, somadiag_s = 0;
    srand(time(NULL)); //ou srand(time(NULL) ^ getpid()); para fazer um XOR entre os dois e aumentar a aleatoriedade (no linux!)
    printf("Matriz gerada:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++)
    {
        somadiag_p += matriz[i][i];
        somadiag_s += matriz[i][4 - i];
    }
    printf("A soma da diagonal principal é %d.\n", somadiag_p);
    printf("A soma da diagonal secundária é %d.\n", somadiag_s);
    return 0;
}