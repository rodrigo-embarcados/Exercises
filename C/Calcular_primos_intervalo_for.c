/*Programa para calcular números primos em um intervalo dado
Este programa calcula todos os números primos em um intervalo dado, imprime-os e
exibe também a quantidade achada*/

#include <stdio.h>
int main(){
    long long int inicio, fim, a = 0;
    printf("Insira o inicio do intervalo:\n");
    scanf("%lld", &inicio);
    printf("Insira o fim do intervalo:\n");
    scanf("%lld", &fim);
    printf("Numeros primos entre %lld e %lld:\n", inicio, fim);
    
    for (long long int i = inicio; i <= fim; i++){
        int primo = 1;
        if (i <= 1){
            primo = 0;
        }
        for (long long int j = 2; j <= i/2; j++){
            if (i % j == 0){
                primo = 0;
                break;
            }
        }
        if (primo){
            printf("%lld ", i);
            a++;
        }
    }
    printf("\n");
    printf("Ha %lld numeros primos entre %lld e %lld\n", a, inicio, fim);
    return 0;
}
