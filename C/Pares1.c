/*Cálculo da soma dos 100 primeiros números pares*/

#include <stdio.h>
#include <stdlib.h>

int testa_par(int x){
    if (x % 2 == 0) return x;
    else return 1;
}

int main(){
    
    int contador = 0;
    int soma = 0;
    for (int i = 0; contador < 100; i++){
        int par = testa_par(i);
        if (par != 1){
            soma = soma + i;
            contador++;
        }
    }/*
    int soma1 = 0;
    int contador1 = 0;
    for (int j = 0; contador1 < 100; j++){
        if (j % 2 != 0){
            soma1 = soma1 + j;
            contador1 ++;
        }
    }
*/  
    printf("A soma dos 100 primeiros números pares é: %d\n", contador);
    
    return 0;
}