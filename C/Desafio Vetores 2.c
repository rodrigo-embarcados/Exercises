#include <stdio.h>

int main(){
	int vetor1[10] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 32};
	int vetor2[10] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
	int vetor_soma[10];
	printf("Os números do vetor 1 são:\n");
	printf("Vetor 1: {");
	for(int i = 0; i < 10; i++){
		printf(i < 9 ? "%d, " : "%d}.\n", vetor1[i]);
		}
		printf("Os números do vetor 2 são:\n");
	printf("Vetor 2: {");
	for(int i = 0; i < 10; i++){
		printf(i < 9 ? "%d, " : "%d}.\n", vetor2[i]);
		}		
	printf("A soma dos números do vetor 1 e vetor 2 é:\n");
	printf("Vetor Soma: {");	
	for(int i = 0; i < 10; i++){
		vetor_soma[i] = vetor1[i] + vetor2[i];
		printf(i < 9 ? "%d, " : "%d}.\n", vetor_soma[i]);
		}
	}