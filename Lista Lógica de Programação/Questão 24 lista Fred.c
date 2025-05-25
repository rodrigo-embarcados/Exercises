//Programa que recebe três números e imprime o maior entre eles

#include <stdio.h>

int main(){
    float num_1, num_2, num_3;
    printf("Insira 3 números e será exibido o maior entre eles:\n");
    scanf("%f", &num_1);
    scanf("%f", &num_2);
    scanf("%f", &num_3);
    if (num_1 > num_2 && num_1 > num_3)
        printf("O maior é o número %.2f", num_1);
    else if (num_2 > num_1 && num_2 > num_3)
        printf("O maior é o número %.2f", num_2);
    else
        printf("O maior é o número %.2f", num_3);
    return 0;
}