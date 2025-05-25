//Questão 3 lista Fred
//Este programa calcula o valor do perímetro de um triângulo, dado o valor dos lados em cm 

#include <stdio.h>

int main (){
    //Declaração de variáveis usadas no programa. Usado flot para cálculo com números decimais
    float lado_1, lado_2, lado_3, perimetro;
    //Seção de interação com usuário, onde é atribuido valores para cálculo às suas respectivas variáveis
    printf("Este programa calcula o perímetro de um triângulo\ndado os valores dos lados\n\n");
    printf("Digite um valor em cm para lado 1:\n");
    scanf("%f", &lado_1);
    printf("Digite um valor em cm para lado 2:\n");
    scanf("%f", &lado_2);
    printf("Digite um valor em cm para lado 3:\n");
    scanf("%f", &lado_3);
    //Cálculo do perímetro
    perimetro = lado_1 + lado_2 + lado_3;
    //Apresentação dos valores após o cálculo para o usuário
    printf("Este triângulo tem %.2f cm de perímetro", perimetro);
    return 0;
}