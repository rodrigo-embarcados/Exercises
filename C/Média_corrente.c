/*Registre valores de corrente por 24h, 1 por hora, até inserir uma parada e imprima
a média das últimas 24hs*/

#include <stdio.h>

int main()
{
	float corrente, soma = 0, correntes [24];
	int cont = 0;
	printf("Insira o valor da corrente medida de 1 em 1 hora. Digite -1 para parar e imprimir a média das últimas 24 medições.\n");
	while (1) {
		printf("Digite o valor da corrente: ");
		scanf("%f", &corrente);
		if (corrente == -1) break;
		correntes [cont] = corrente;
		if (cont == 23) cont = 0;
		else cont++;
	}
	for (int i = 0; i < 24; i++) {
		soma += correntes[i];
	}
	printf("A média das correntes nas últimas 24h é: %.2f A.\n", soma/24);
}

