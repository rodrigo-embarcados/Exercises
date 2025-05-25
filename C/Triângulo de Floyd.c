/******************************************************************************

5. Triângulo de Floyd

O triângulo de Floyd é formado por números sequenciais organizados em formato triangular. 
Escreva um programa que leia um número inteiro n e imprima o triângulo de Floyd com n linhas.

Exemplo de entrada/saída:

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int n, num = 1;
    printf("Insira um número inteiro n e será exibido um triângulo de Floyd com n linhas: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
