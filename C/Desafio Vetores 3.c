#include <stdio.h>

int main() {
	int vetor1[10] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 32};
	int vetor2[10] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
    int primeiro = 1;
	printf("Os números primos do vetor 1 são:\n");
	printf("Vetor 1: {");
	for(int i = 0; i < 10; i++) {
		int primo = 1, cont = 2;
		if (vetor1[i] < 2) primo = 0;
		else {
			while (primo == 1 && cont * cont <= vetor1[i]) {  // verifica-se até a raiz quadrada ou pode ser até a metade do número
				if (vetor1[i] % cont == 0) {
					primo = 0;
					break;
				}
				cont++;
			}
		}
		if(primo){
		    if(!primeiro) printf(", "); // virgula só impressa após um primo impresso
		    printf("%d", vetor1[i]);
		    primeiro = 0;
		}
	}
	printf("}.\n");
	primeiro = 1;
	printf("Os números primos do vetor 2 são:\n");
	printf("Vetor 2: {");
	for(int i = 0; i < 10; i++) {
		int primo = 1, cont = 2;
		if (vetor2[i] < 2) primo = 0;
		else {
			while (primo == 1 && cont * cont <= vetor2[i]) {
				if (vetor2[i] % cont == 0) {
					primo = 0;
					break;
				}
				cont++;
			}
		}
		if(primo){
		    if(!primeiro) printf(", ");
		    printf("%d", vetor2[i]);
		    primeiro = 0;
		}
	}
	printf("}.\n");
}