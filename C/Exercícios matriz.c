/******************************************************************************

Gerar uma matriz 6x8 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[6][8], linha, maior, soma = 0;
    srand(time(NULL));
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            matriz[i][j] = rand()%100;
        }
    }
    printf("Matriz gerada com números aleatórios:\n\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("%2d ", matriz[i][j]); // ou então printf(matriz[i][j] < 10 ? "0%d " : "%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Informe um número de 1 a 6 e será exibido o maior valor desta linha da matriz: ");
    scanf("%d", &linha);
    linha -= 1;
    maior = matriz[linha][0];
    for(int i = 1; i < 8; i++)
    {
        if(matriz[linha][i] > maior) maior = matriz[linha][i];
    }
    printf("O maior número da linha %d é %d.\n", linha + 1, maior);
    for(int i = 0; i < 6; i++)
    {
        soma += matriz[i][i];
    }
    printf("A soma dos elementos da diagonal da matriz é: %d", soma);
    return 0;
}