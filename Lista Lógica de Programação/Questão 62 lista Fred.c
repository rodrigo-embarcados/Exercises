//Programa que imprime valores de um array indicando também a posição equivalente, um por linha

#include <stdio.h>

int main(){
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, valor, a = 0;
    for (int x = 0; x < 10; x++){
        valor = vetor[x];
        if (valor % 2 == 0 && valor > 0){
            printf ("%d na posicão %d\n", valor, x);
            a++;
        }
    }
    printf("Há %d números pares no vetor\n", a);
    return 0;
}