/******************************************************************************

Verificação de Palíndromo
Desenvolva um código que leia uma palavra e determine se ela é um palíndromo 
(ou seja, se pode ser lida da mesma forma de trás para frente).

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[21];
    int palindromo = 1, tamanho;
    printf("Digite uma palavra em minúsculas, com até 20 letras para verificar se ela é um palíndromo: ");
    //scanf("%20s", palavra);
    fgets(palavra, 21, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    tamanho = strlen(palavra);
    for(int i = 0; i < tamanho / 2; i++)
    {
        if(palavra[i] != ' ')
            if(palavra[i] != palavra[tamanho - 1 - i]) palindromo = 0;
    }
    if(palindromo) printf("A palavra %s é um palíndromo.\n", palavra);
    else printf("A palavra %s não é um palíndromo.\n", palavra);
    return 0;
}