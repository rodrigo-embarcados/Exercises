/*2. Soma da Diagonal Secundária

Leia uma matriz 4x4 e exiba a soma dos elementos da diagonal secundária (da direita para a esquerda).*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int matriz[4][4], soma = 0;
	srand(time(NULL));
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			matriz[i][j] = rand() % 100;
		}	
	}
	printf("Matriz gerada: \n");
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < 4; i++)
	{
		soma += matriz[i][3 - i];
	}
	printf("A soma dos elementos da diagonal secundária é: %d.\n", soma);
}