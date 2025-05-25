/******************************************************************************

ler 2 frases e informar qual tem mais vogais
ver se uma palavra frase 1 repete na frase 2

*******************************************************************************/
#include <stdio.h>

int main()
{
    char frase1[100], frase2[100], vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int vogais1 = 0, vogais2 = 0;
    printf("Insira 2 frases com até 99 carateres.\n");
    printf("Insira a frase 1: ");
    fgets(frase1, 100, stdin);
    printf("Agora insira a frase 2: ");
    fgets(frase2, 100, stdin);
    for(int i = 0; frase1[i] != '\0'; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(frase1[i] == vogais[j]) vogais1++;
        }
    }
    for(int i = 0; frase2[i] != '\0'; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(frase2[i] == vogais[j]) vogais2++;
        }
    }
    if(vogais1 > vogais2) printf("A frase 1 tem mais vogais.\n");
    else if(vogais1 == vogais2) printf("As duas frases tem a mesma quantidade de vogais.\n");
    else printf("A frase 2 tem mais vogais.\n");
    char palavra[20];
    int pos = 0, igual; //Uso 2 variáveis para salvar a posição da palavra e controlar se acha palavra igual
    do
    {
        for(int i = pos, j = 0; frase1[i] != ' '; i++, j++) // loop para salvar uma palavra em um vetor auxiliar
        {
            palavra[j] = frase1[i];
            pos++;
        }
        int cont = 0; //varivável controle para comparar a palavra salva com as palavras da 2ª frase
        for(int i = 0; frase2[i] != '\0'; i++)
        {
            if(frase2[i] == ' ')
            {
                cont = 0;
                continue;
            } 
            else
            {
                if(frase2[i] == palavra[cont]) igual = 1;
                else igual = 0;
                cont++;
            }
        }
        if(igual) printf("A palavra %s está nos dois textos.\n", palavra);
        pos++;
    }
    while(pos < 100);
    return 0;
}