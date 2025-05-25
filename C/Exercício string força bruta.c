/******************************************************************************

ler 2 frases e informar qual tem mais vogais
ver se uma palavra frase 1 repete na frase 2
Força bruta

*******************************************************************************/

#include <stdio.h>

int main()
{
    char frase1[100], frase2[100], vogais[5] = {'a', 'e', 'i', 'o', 'u'}; //Fiz 2 vetores com 100 posições e um terceiro só com vogais
    int vogais1 = 0, vogais2 = 0;

    printf("Insira 2 frases com até 99 caracteres.\n"); //Aqui faço a leitura das duas frases com fgets
    printf("Insira a frase 1: ");
    fgets(frase1, 100, stdin);
    printf("Agora insira a frase 2: ");
    fgets(frase2, 100, stdin);

    // Contagem de vogais na frase 1
    for (int i = 0; frase1[i] != '\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (frase1[i] == vogais[j]) vogais1++; //Percorre todo o vetor até '\0', incrementando vogais1 se achar uma vogal
        }
    }

    // Contagem de vogais na frase 2
    for (int i = 0; frase2[i] != '\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (frase2[i] == vogais[j]) vogais2++; //Percorre todo o vetor até '\0', incrementando vogais2 se achar uma vogal
        }
    }

    // Exibe qual frase tem mais vogais
    if (vogais1 > vogais2) printf("A frase 1 tem mais vogais.\n");
    else if (vogais1 == vogais2) printf("As duas frases têm a mesma quantidade de vogais.\n");
    else printf("A frase 2 tem mais vogais.\n");

    // Verificação de palavras repetidas entre as frases
    char palavra[20];
    int pos = 0, igual, fim_frase = 0;  

    do
    {
        // Extração da palavra da frase1
        int j = 0;
        while (frase1[pos] != ' ' && frase1[pos] != '\n' && frase1[pos] != '\0' && j < 19)
        {
            palavra[j] = frase1[pos];
            pos++;
            j++;
        }
        palavra[j] = '\0'; // Finaliza a string corretamente

        // Verifica se a palavra aparece na frase2
        int cont = 0;
        igual = 0; // Variável zerada antes da comparação

        for (int i = 0; frase2[i] != '\0'; i++)
        {
            if (frase2[i] == ' ' || frase2[i] == '\n')
            {
                cont = 0; // Reinicia a contagem para próxima palavra
            }
            else
            {
                if (frase2[i] == palavra[cont])
                {
                    cont++;
                    if (palavra[cont] == '\0' && (frase2[i + 1] == ' ' || frase2[i + 1] == '\n' || frase2[i + 1] == '\0'))
                    {
                        igual = 1; // A palavra foi encontrada completa
                    }
                }
                else
                {
                    cont = 0; // Reset caso os caracteres não coincidam
                }
            }
        }

        if (igual) printf("A palavra '%s' está presente nas duas frases.\n", palavra);

        // Avança para a próxima palavra na frase1
        while (frase1[pos] == ' ') pos++; // Ignora espaços
        if (frase1[pos] == '\0' || frase1[pos] == '\n') fim_frase = 1; // Finaliza loop se acabou a frase
    } 
    while (!fim_frase);
    return 0;
}