#include <stdio.h>

int main()
{
	int vetor1[10] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 323};
	int vetor2[10] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
	printf("Os números do vetor 1 que não estão no vetor 2 são: ");
	int igual;
	for(int i = 0; i < 10; i++){
	    igual = 0;
	    for(int j = 0; j < 10; j++){
    		if (vetor1[i] == vetor2[j]){
    			igual = 1;
    			}
		}
		if(!igual) printf("%d ", vetor1[i]);
	}	
}