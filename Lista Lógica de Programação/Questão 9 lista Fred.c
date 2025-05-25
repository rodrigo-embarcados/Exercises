//Este programa calcula o volume de uma lata de óleo dado seu raio e altura

#include <stdio.h>

int main(){
    float raio, altura, volume;
    printf("Insira um valor de raio e altura para calcular o volume de uma lata de oleo\n\n");
    printf("Insira o raio\n");
    scanf("%f", &raio);
    printf("Insira a altura\n");
    scanf("%f", &altura);
    volume =  3.1415 * raio * raio * altura;
    printf("O valor do volume é: %.2f cm³", volume);
    return 0;
}