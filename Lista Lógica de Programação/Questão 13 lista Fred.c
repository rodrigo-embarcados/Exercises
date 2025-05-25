//Programa para calcular associação de resistores
//Este programa calcula a associação de dois resistores em paralelo e essa associação em série com um terceiro resistores
#include <stdio.h>

int main(){
    float r1, r2, r3, associacao;
    printf("Insira o valor, em ohms de três resistores, sendo o valor apresentado como resultante da associação");
    printf("de dois resistores em paralelo e juntamente com um terceiro resistor em série.\n");
    printf("Insira o valor do primeiro resistor:\n");
    scanf("%f", &r1);
    printf("Insira o valor do segundo resistor:\n");
    scanf("%f", &r2);
    printf("Insira o valor do terceiro resistor:\n");
    scanf("%f", &r3);
    associacao = ((r1 * r2) / (r1 + r2)) + r3;
    printf("O resultado da associação é: %.2f ohms", associacao);
    return 0;
}