#include<stdio.h>
int main (){
	int vetor [10];
	int x = 0, y;
	while(x < 10){
		scanf("%d", &vetor[x]);
		x++;
	}
	y = x - 1;
	for (x = 0; x <= y; x++){
		printf("%d ", vetor[x]);
	}
}