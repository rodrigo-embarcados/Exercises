/******************************************************************************

Crie um jogo onde o usuário insere dois números e escolhe "Ímpar" ou "Par". O programa deve dizer se a soma é ímpar ou par e se o usuário acertou.

Desafio: Simplifique a lógica de verificação do resultado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int numero_1, numero_2, soma, verificacao, teste;
   printf("Insira dois números inteiros: \n");
   scanf("%d", &numero_1);
   scanf("%d", &numero_2);
   printf("Agora escolha se a soma deles será 1 - impar ou 2 - par\n");
   scanf("%d", &verificacao);
   soma = numero_1 + numero_2;
   teste = (soma % 2 == 0) ? 0 : 1;
   printf((!teste) ? "A soma é par!\n" : "A soma é ímpar!\n");
   printf((verificacao == 2 && teste == 0 || verificacao == 1 && teste == 1) ? "Parabéns, você acertou!\n" : "Infelizmente você errou!\n"); 
}