#include <stdio.h>
#include <stdlib.h>

float delta (float a, float b, float c){
    float d = (b * b) - (4 * a * c);
    return d;
}

int main(){
    float a, b, c;
    printf("Informe os valores de a, b e c:\n"); \\ Solicita os dados para cálculo
    printf("\t a = ");
    scanf("%f", &a);
    while (a <= 0){  \\ Loop para teste se a > 0
        printf("Insira um valor maior que zero para a:\n");
        printf("\t a = ");
        scanf("%f", &a);
    }
    printf("\t b = ");
    scanf("%f", &b);
    printf("\t c = ");
    scanf("%f", &c);
    float del = delta (a, b, c); \\ Chama função delta para cálculo de delta
    if (del == 0){ \\ Testa se delta é igual a zero
        printf("\t Existe apenas uma raiz real.");
        }
    else if (del > 0) { \\ Testa se delta é maior que zero
        printf("\t Existem duas raízes reais.");
        }
    else { \\ Testa se delta é menor que zero
        printf("Não existe raiz real\n");
    }
}