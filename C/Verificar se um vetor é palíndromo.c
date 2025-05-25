/******************************************************************************

Verificar se um vetor é palíndromo (ex.: [1, 2, 3, 2, 1]).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[5] = {3, 2, 1, 2, 3};
    int rotev[5];
    for(int i = 0, j = 4; i < 5 && j > -1; i++, j--){
        rotev[j] = vetor[i];
    }
    int palindromo = 1, i = 0;
    while(i < 5){
        if(vetor[i] != rotev[i]){
            palindromo = 0;
            break;
        }
        i++;
    }
    if(palindromo){
        printf("O vetor é um palíndromo.\n");
    }
    else{
        printf("O vetor não é um palíndromo.\n");
    }
    return 0;
}


/*
#include <stdio.h>

int main()
{
    int vetor[5] = {3, 2, 1, 2, 3};
    int palindromo = 1;

    for (int i = 0, j = 4; i < j; i++, j--) {
        if (vetor[i] != vetor[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("O vetor é um palíndromo.\n");
    } else {
        printf("O vetor não é um palíndromo.\n");
    }

    return 0;
}

*/
