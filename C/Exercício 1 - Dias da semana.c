#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia;
    printf("Insira um número para exibir o dia da semana: ");
    scanf("%d", &dia);
    switch (dia){
        case 1:
            printf("Segunda-Feira\n");
            break;
        case 2:
            printf("Terça-Feira\n");
            break;
        case 3:
            printf("Quarta-Feira\n");
            break;
        case 4:
            printf("Quinta-Feira\n");
            break;
        case 5:
            printf("Sexta-Feira\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Valor inválido!\n");
            break;
    }
}