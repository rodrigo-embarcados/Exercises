/******************************************************************************

2. Faça um programa que carregue o vetor nome com o seu nome (nome
completo), fornecido via teclado. Utilize a função gets para a leitura e em
seguida use a função a função puts para imprimir o nome. Substitua a
função gets pela função scanf e avalie os resultados.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome1[50], nome2[50];
    printf("Insira seu nome completo: ");
    fgets(nome1, sizeof(nome1), stdin);
    puts(nome1);
    printf("Insira novamente seu nome completo: ");
    scanf("%s", nome2);
    puts(nome2);
    return 0;
}
