#include <stdio.h>

int main(){
  int sub, numero, cont = 0, a = 1;
  scanf("%d", &numero);
  sub = numero;
  while (sub > 0){
  	sub = numero - a;
	a += 2;
	cont++;
  }
  	if (sub < 0)
		printf("A raiz aproximada é: %d", cont);
	else if (sub == 0)
		printf("A raiz exata é: %d", cont);
	return 0;
}