/******************************************************************************
faça um programa para ler números até digitado o número chave
exiba menor valor, maior valor e média dos valores.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    
    float num_chave, num_dig, num_maior, num_menor, media, aux = 0, soma = 0;
    int cont = 0;
    bool teste = (num_chave == num_dig);
    
    printf("Digite o número chave:\n");
    scanf("%f", &num_chave);

    while(!teste){
        printf("Digite um número:\n");
        scanf("%f", &num_dig);
        teste = (num_chave == num_dig);
        if(num_dig >= aux){
            num_maior = num_dig;
            num_menor = aux;
        } 
        else if(num_dig < aux){
          num_menor = num_dig;
          num_maior = aux;
        } 
        soma = soma + num_dig;
        aux = num_dig;
        cont++;
    }
    
    media = soma / cont;
    printf("O maior número digitado foi %.2f, o menor foi %.2f e a média\n", num_maior, num_menor);
    printf("dos números digitados foi %.2f\n", media);
    
    return 0;
}