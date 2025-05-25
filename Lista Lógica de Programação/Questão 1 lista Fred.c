//Questão 1 lista Fred.
//Calcular perímetro e área de um retângulo
#include <stdio.h>
int main(){
    //Declaração de variáveis usadas no programa. Usado flot para cálculo com números decimais
    float base, altura, perimetro, area;
    //Seção de interação com usuário, onde é atribuido valores para cálculo às suas respectivas variáveis
    printf("Este programa calcula a área e perímetro de um retângulo\ndados valores para base e altura\n\n");
    printf("Digite um valor em cm para base:\n");
    scanf("%f", &base);
    printf("Agora digite um valor em cm para a altura:\n");
    scanf("%f", &altura);
    //Cálculo do perímetro e área
    perimetro = (2 * base) + (2* altura);
    area = base * altura;
    //Apresentação dos valores após o cálculo para o usuário
    printf("Este retângulo tem %.2f cm de perímetro e %.2f cm² de área", perimetro, area);
    return 0;
}