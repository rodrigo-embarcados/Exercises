//Questão 2 lista Fred
//Este programa calcula o valor do perímetro e área de um quadrado, dado um valor de lado em cm 

#include <stdio.h>

int main (){
    //Declaração de variáveis usadas no programa. Usado flot para cálculo com números decimais
    float lado, perimetro, area;
    //Seção de interação com usuário, onde é atribuido valores para cálculo às suas respectivas variáveis
    printf("Este programa calcula a área e perímetro de um quadrado\ndado o valor para o lado\n\n");
    printf("Digite um valor em cm para lado:\n");
    scanf("%f", &lado);
    //Cálculo do perímetro e área
    perimetro = (lado * 4);
    area = lado * lado;
    //Apresentação dos valores após o cálculo para o usuário
    printf("Este retângulo tem %.2f cm de perímetro e %.2f cm² de área", perimetro, area);
    return 0;
}