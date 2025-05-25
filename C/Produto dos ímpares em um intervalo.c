/* 6. Produto dos ímpares em um intervalo
Escreva um programa que imprima o produto de todos os ímpares de um intervalo [x, y] com x < y. Caso não haja ímpares, imprima uma mensagem adequada.*/

#include <stdio.h>

int main(){
    int x, y, produto = 1;
    
    printf("Insira dois números e será calculado o produto de todos os ímpares do intervalo, incluindo os números digitados: ");
    scanf("%d %d", &x, &y);
    for(int i = x; i <= y; i++){
        if(i % 2 != 0){
            produto *= i;
        }
    }
    if(produto != 1){
        printf("O produto dos ímpares no intervalo %d a %d é: %d\n", x, y, produto);
    }
    else{
        printf("Não há números ímpares no intervalo %d a %d.\n", x, y);
    }
}