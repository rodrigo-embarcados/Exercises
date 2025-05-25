/******************************************************************************

Array 10 posições que aceite números somente de 50 a 200. Exiba o array depois.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int array[10];
    int cont = 0, num;
    printf("Insira 10 números entre 50 e 200:\n");
    while(cont < 10)
    {
        printf("\t%2dº número: ", cont+1);
        scanf("%d", &num);
        if(num >= 50 && num <= 200)
        {
            array[cont] = num;
            cont++;
        }
        else printf("Você inseriu um número fora da faixa de 50 a 200. Tente novamente:\n");
    }
    printf("\nO vetor digitado foi: ");
    printf("{");
    for(int i = 0; i < 10; i++)
    {
        printf(i < 9 ? "%d, " : "%d}.", array[i]);
    }
    return 0;
}