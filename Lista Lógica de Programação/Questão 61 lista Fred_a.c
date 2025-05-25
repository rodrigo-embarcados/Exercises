//Programa que imprime valores de um array indicando também a posição equivalente, um por linha

#include <stdio.h>

int main(){
    int vetor[20] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
    for (int x = 0, a = 0; x < 20, a < 20; x++, a++){
        printf("%d na posição %d\n", vetor[x], a);
    }
    return 0;
}