#include <stdio.h>

int main(){
	int x, y, igual;
	int vetor_1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int vetor_2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int vetor_1_bak[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int vetor_2_bak[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	printf("Os números presentes somente no vetor 1 são:\n");
	for (x = 0; x < 10; x++){
		igual = 0;
		for (y = 0; y < 10; y++){
			if (vetor_1[x] == vetor_2[y]){
			igual = 1;
			break;
			}
		}
		if (!igual)
		printf("%d ", vetor_1[x]);
	}
	printf("\n");

	printf("O vetor 1 em ordem crescente:\n");
	int temp;
	for (int a = 0; a < 10 - 1; a++){
		for (int b = 0; b < 10 - a - 1; b++){
			if (vetor_1[b] > vetor_1[b + 1]){
			temp = vetor_1[b];
			vetor_1[b] = vetor_1[b + 1];
			vetor_1[b + 1] = temp;
			}
		}
	}
	for (int c = 0; c < 10; c++){
		printf("%d ", vetor_1[c]);
	}
	printf("\n");

	printf("O vetor 2 em ordem crescente:\n");
	int temp1;
	for (int d = 0; d < 10 - 1; d++){
		for (int e = 0; e < 10 - d - 1; e++){
			if (vetor_2[e] > vetor_2[e + 1]){
				temp1 = vetor_2[e];
				vetor_2[e] = vetor_2[e + 1];
				vetor_2[e + 1] = temp1;
			}
		}
	}
	for (int f = 0; f < 10; f++){
		printf("%d ", vetor_2[f]);
	}
	printf("\n");

	printf("O vetor 1 em ordem decrescente:\n");
	int temp2;
	for (int g = 0; g < 10 - 1; g++){
		for (int h = 0; h < 10 - g - 1; h++){
			if (vetor_1[h] < vetor_1[h + 1]){
				temp2 = vetor_1[h];
				vetor_1[h] = vetor_1[h + 1];
				vetor_1[h + 1] = temp2;
			}
		}
	}
	for (int i = 0; i < 10; i++){
		printf("%d ", vetor_1[i]);
	}
	printf("\n");

	printf("O vetor 2 em ordem decrescente:\n");
	int temp3;
	for (int j = 0; j < 10 - 1; j++){
		for (int k = 0; k < 10 - j - 1; k++){
			if (vetor_2[k] < vetor_2[k + 1]){
				temp3 = vetor_2[k];
				vetor_2[k] = vetor_2[k + 1];
				vetor_2[k + 1] = temp3;
			}
		}
	}
	for (int l = 0; l < 10; l++){
		printf("%d ", vetor_2[l]);
	}
	printf("\n");

	for (int m = 0; m < 10; m++){
		vetor_1[m] = vetor_1_bak[m];
		vetor_2[m] = vetor_2_bak[m];
	}

	int vetor_3[10], n, o, p;
	for (n = 0, o = 0, p = 0; n < 10, o < 10, p < 10; n++, o++, p++){
		vetor_3[p] = vetor_1[n] + vetor_2[o];
	}
	printf("A soma dos dois vetores:\n");
	for (int q = 0; q < 10; q++){
		printf("%d ", vetor_3[q]);
	}
	printf("\n");

	int r, s, t = 0, u, v = 0, w;

	printf("A soma de todos valores do vetor 1:\n");
	for (r = 0; r < 10; r += 2){
		s = vetor_1[r] + vetor_1[r + 1] + t;
		t = s;
	}
	printf("%d\n", s);
	printf("A soma de todos os valores do vetor 2:\n");
	for (u = 0; u < 10; u += 2){
		w = vetor_2[u] + vetor_2[u + 1] + v;
		v = w;
	}
	printf("%d\n", w);
	
	printf("Os números primos do vetor 1 são:\n");
	for (int a = 0; a < 10; a++){
	    int primo = 1;
	    if (vetor_1[a] <= 1)
	        primo = 0;
        for (int b = 2; b <= vetor_1[a]/2; b++){
            if (vetor_1[a] % b == 0){
                primo = 0;
                break;
            }
        }
	if (primo)
        printf("%d ", vetor_1[a]);
	}
	printf("\n");
	printf("Os números primos do vetor 2 são:\n");
	for (int a = 0; a < 10; a++){
	    int primo = 1;
	    if (vetor_2[a] <= 1)
	        primo = 0;
        for (int b = 2; b <= vetor_2[a]/2; b++){
            if (vetor_2[a] % b == 0){
                primo = 0;
                break;
            }
        }
	if (primo)
        printf("%d ", vetor_2[a]);
	}
	printf("\n");
	int elementos1;
	for (int i = 0; i < 10; i++){
	    if (vetor_1[i] >= 0)
	        elementos1++;
	}
	printf("Há %d elementos no vetor 1\n", elementos1);
	
	int elementos2;
	for (int i = 0; i < 10; i++){
	    if (vetor_2[i] >= 0)
	        elementos2++;
	}
	printf("Há %d elementos no vetor 2\n", elementos2);
	return 0;
}