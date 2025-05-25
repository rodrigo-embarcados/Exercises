/******************************************************************************

Uma professora fez um ditado com 10 palavras. Cada palavra tem no máximo 20 caracteres.
Leia a resposta do aluno e informe qual palavra tem mais vogais.

*******************************************************************************/

#include<stdio.h>

#define P 10
#define C 21

int main()
{
	char ditado[P][C], vogais[10] = {'A', 'E', 'I', 'O', 'U','a', 'e', 'i', 'o', 'u'};
	int palavra, cont = 0, maior = 0;
	printf("Insira 10 palavras com no máximo 20 letras cada.\n");
	for(int i = 0; i < P; i++)
	{
		printf("\tInsira a %2dª palavra: ", i + 1);
		scanf("%20s", ditado[i]);
		getchar();
	}
	for(int i = 0; i < P; i++)
	{
		for(int j = 0; ditado[i][j] != '\0'; j++)
		{
			for(int k = 0; k < 10; k++)
			{
				if(ditado[i][j] == vogais[k]) cont++;
			}
		}
		if(cont > maior)
		{
			palavra = i;
			maior = cont;
		}
		cont = 0;		
	}
	printf("%s é a palavra com mais vogais.\n", ditado[palavra]);
}