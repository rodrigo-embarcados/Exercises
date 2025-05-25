/******************************************************************************

2. Escreva um programa que leia uma string, conte quantos caracteres desta string
são iguais a 'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir
o número de caracteres modificados e a string modificada.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char string[47];
    int cont = 0;
    printf("Insira uma palavra com até 46 letras e ela será exibida com a troca da letra a por b: ");
    scanf("%s", string);
    for(int i = 0; i < 46; i++)
    {
        if(string[i] == 'a')
        {
            cont++;
            string[i] = 'b';
        }
    }
    if(cont > 0)
    {
        printf("A palavra foi modificada, substituindo a por b e ficou assim: %s.\n", string);
        printf("Ocorreu(ram) %d substituição(ões).\n", cont);
    }
    else
    {
        printf("A palavra digitada foi: %s.\n", string);
        printf("Ocorreu(ram) %d substituição(ões).\n", cont);
    }
    return 0;
}
