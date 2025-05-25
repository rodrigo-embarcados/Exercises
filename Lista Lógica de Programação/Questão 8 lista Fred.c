//Este programa converte farenheit para celsius

#include <stdio.h>

int main(){
    float farenheit, celsius;
    printf("Este programa converte uma temperatura em farenheit para celsius.\n\n");
    printf("Insira uma temperatura em farenheit:\n");
    scanf("%f", &farenheit);
    celsius = (farenheit - 32) * 5/9;
    printf("O valor %.2f° F equivale a %.2F° C", farenheit, celsius);
    return 0;
}