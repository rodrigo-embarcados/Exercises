//Este programa converte um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>

int main(){
    int numero, b1, b2, b3, b4, b5;
    printf("Insira um número inteiro positivo menor que 32 para visualizar sua representação em binário.\n");
    scanf("%d",&numero);
    /*Aqui, testa-se se o número atende o requisito necessário. Como o número será menor que 32, serão necessãrios somente 5 bits,
    podendo-se adaptar o algoritmo para números maiores aumentando-se o numero de divisões. A lógica sempre pega o resto da
    divisão e o dividendo será o quociente de uma divisão anterior por 2 (exceto a primeira). Calcula-se do digito menos significativo, b1,
    para o mais significativo, b5*/
    if (numero < 32 && numero >= 0){
        b1 = numero % 2;
        b2 = (numero / 2) % 2;
        b3 = ((numero / 2) / 2) % 2;
        b4 = (((numero / 2) / 2) / 2) % 2;
        b5 = ((((numero / 2) / 2) / 2) / 2) % 2;
        
        printf("%d em binário é: %d%d%d%d%d", numero, b5, b4, b3, b2, b1);
    }
    else if (numero < 0 || numero > 32)
        printf("O número que você inseriu não é positivo ou menor que 32.");
    return 0;
}