//Este programa solicita a idade de uma pessoa em dias e informa na tela a idade em anos, meses e dias.

#include <stdio.h>

int main(){
    int idade, anos, meses, dias;
    printf("Insira sua idade em dias e será informado na tela a idade em anos, meses e dias.\n\n");
    scanf("%d", &idade);
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    printf("Sua idade: %d anos, %d meses e %d dias", anos, meses, dias);
    return 0;
}