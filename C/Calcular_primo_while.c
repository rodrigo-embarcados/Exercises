/*Programa para calcular se o número é primo
Este programa calcula se um dado número é ou não primo utilizando sucessivos divisores
até a metade do número dado*/

#include<stdio.h>
int main(){
    int numero, ehPrimo = 1, i = 2;
    printf("Insira um numero para verificar se o mesmo é primo: ");
    scanf("%d", &numero);
    if (numero <= 1)
        ehPrimo = 0;
    while (ehPrimo == 1 && i <= numero/2){
        if (numero % i == 0){
                ehPrimo = 0;
                break;
        }
        i++;
    }
    if (ehPrimo == 1) printf("%d é primo\n", numero);
    else printf("%d não é primo\n", numero);
}
