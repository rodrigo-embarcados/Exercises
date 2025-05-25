/*
Questão 72
*/


#include <stdio.h>

int main(){
	int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, num, cont = 0;
	printf("Insira um número inteiro positivo e será exibido qual a sua posição no vetor: ");
	scanf("%d", &num);
	while(1){
	 if(vetor[cont] != num){
	 	cont++;
	 	}
	 else{
	 	printf("A posição do número %d é %d.\n", num, cont);
	 	break;
	 	}	 	 	 
	 }	
	
	}