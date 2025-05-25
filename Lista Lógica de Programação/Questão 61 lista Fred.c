//Programa que imprime valores de um array indicando também a posição equivalente, um por linha

#include <stdio.h>

int main(){
    int vetor[20];
    for (int x = 0; x < 20; x++){
        vetor[x] = 0;
    }
    for (int x = 0, a = 0; x < 20, a < 20; x++, a++){
        printf("%d na posição %d\n", vetor[x], a);
    }
    return 0;
}