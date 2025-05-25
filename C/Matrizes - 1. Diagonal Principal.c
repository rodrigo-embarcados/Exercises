/*1. Diagonal Principal

Leia uma matriz 3x3 e exiba os elementos da diagonal principal.*/

#include<stdio.h>

int main()
{
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printf("A diagonal da matriz é: ");
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", matriz[i][i]);	
	}
	return 0;
}