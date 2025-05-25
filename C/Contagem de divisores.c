/*5. Contagem de divisores

Leia um número inteiro positivo n e exiba todos os seus divisores, além da contagem total de divisores.*/

#include <stdio.h>

int main(){
    int num, cont = 0, div = 1;
    printf("Insira um inteiro positivo e será exibido quantos e quais são os seus divisores: ");
    scanf("%d", &num);
    printf("Os divisores de %d são: ", num);
    while(div <= num){
        if(num % div == 0){
            printf((div != num) ? "%d, " : "%d.\n", div);
            cont++;
        }
    div++;
    }
    printf("O número %d tem %d divisores.\n", num, cont);
}