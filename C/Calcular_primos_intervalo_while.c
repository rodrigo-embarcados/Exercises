/*Programa para calcular números primos em um intervalo dado
Este programa calcula todos os números primos em um intervalo dado, imprime-os e
exibe também a quantidade achada*/

#include <stdio.h>
int main(){
    long long int inicio, fim, a = 0, i, j;
    printf("Insira o inicio do intervalo:\n");
    scanf("%lld", &inicio);
    printf("Insira o fim do intervalo:\n");
    scanf("%lld", &fim);
    printf("Os numeros primos entre %lld e %lld sao:\n", inicio, fim);
    i = inicio;
    while (i <= fim){
        int primo = 1;
        if (i <= 1)
            primo = 0;
        if (i == 2)
            primo = 1;
        else {
            j = 2;
            while (j <= i/2){
               if (i % j == 0){
                   primo = 0;
                   break;
                }
               j++;
            }
        }
        if (primo){
            printf("%lld ", i);
            a++;
        }
        i++;    
    }
    printf("\n");
    printf("Ha %lld numeros primos entre %lld e %lld!\n", a, inicio, fim);
    return 0;
}






