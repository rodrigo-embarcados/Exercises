/******************************************************************************

3. Faca um programa que leia o nome de 5 pessoas e mostre os nomes armazenados.
Utilize vetores.

*******************************************************************************/
#include <stdio.h>
#define TAM 20

int main()
{
    char nome1[TAM], nome2[TAM], nome3[TAM], nome4[TAM], nome5[TAM];
    printf("Insira o nome de 5 pessoas: ");
    scanf("%s", nome1);
    scanf("%s", nome2);
    scanf("%s", nome3);
    scanf("%s", nome4);
    scanf("%s", nome5);
    printf("Eis os nomes digitados: \n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n", nome1, nome2, nome3, nome4, nome5);
    return 0;
}
