/******************************************************************************

Exercício 8: Verificar Triângulo
Descrição:
Implemente um programa que determine se três lados formam um triângulo válido. 
Os lados de um triângulo devem satisfazer a condição de que a soma de dois lados é sempre maior que o terceiro lado. 
O programa deve pedir os três lados do triângulo e informar se ele é válido ou não.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int a, b, c;
    printf("Insira 3 números inteiros para verificar se formam um triângulo válido: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a + b > c || a + c > b || b + c > a) 
        printf("Os números digitados formam um triângulo válido!\n");
    else
        printf("Os números digitados NÃO formam um triângulo válido.\n");
}
