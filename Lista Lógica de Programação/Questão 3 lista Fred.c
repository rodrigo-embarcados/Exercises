//Questão 3 lista Fred
//Este programa calcula o valor do comprimento e área de uma circunferência, dado um valor de raio em cm 

#include <stdio.h>

int main (){
    //Declaração de variáveis usadas no programa. Usado flot para cálculo com números decimais
    float raio, comprimento, area;
    //Seção de interação com usuário, onde é atribuido valores para cálculo às suas respectivas variáveis
    printf("Este programa calcula a área e comprimento de uma circunferência\ndado o valor para o raio\n\n");
    printf("Digite um valor em cm para raio:\n");
    scanf("%f", &raio);
    //Cálculo do perímetro e área
    comprimento = (2 * raio * 3.1415);
    area = 3.1415 * raio * raio;
    //Apresentação dos valores após o cálculo para o usuário
    printf("Esta circunferência tem aproximadamente %.2f cm de comprimento e %.2f cm² de área", comprimento, area);
    return 0;
}