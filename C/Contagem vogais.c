/******************************************************************************

Contagem de Vogais
Escreva um programa que leia uma string e conte quantas vogais (a, e, i, o, u, maiúsculas ou minúsculas) ela possui.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char palavra[21], vogais[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 
    int cont = 0;
    printf("Insira uma palavra de até 20 letras: ");
    scanf("%20s", palavra);
    for(int i = 0; palavra[i] != '\0'; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(palavra[i] == vogais[j]) cont++;
        }
    }
    printf("A palavra %s tem %d vogais.", palavra, cont);
    return 0;
}