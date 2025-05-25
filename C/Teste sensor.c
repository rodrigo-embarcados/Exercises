/******************************************************************************

intervalo 20-30 graus
2 vezes seguidas fora do intervalo, break
media temp, maior e menor

*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>

int main(){
    float temperatura, soma, media, max, min; 
    int cont1 = 0, cont2 = 0;
    printf ("Insira o valor lido no sensor: ");
    scanf("%f", &temperatura);
    if (temperatura > 30 || temperatura < 20) {
            cont1++;
        }
    cont2++;
    min = max = temperatura;
    soma = temperatura;
    while (cont1 != 2) {
        printf ("Insira o valor lido no sensor: ");
        scanf("%f", &temperatura);
        if (temperatura > 30 || temperatura < 20) {
            cont1++;
        }
        else {
            cont1 = 0;
        }
        soma += temperatura;
        cont2++;
        if (temperatura > max) {
            max = temperatura;
        } 
        if (temperatura < min) {
            min = temperatura;
        }
    }
    printf("A media das temperaturas é: %.2f\n", soma/cont2);
    printf("A maior temperatura é: %.2f\n", max);
    printf("A menor temperatura é: %.2f\n", min);
    }