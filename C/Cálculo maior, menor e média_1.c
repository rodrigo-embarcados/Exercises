#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    float num_chave, num_dig, num_maior, num_menor, media, soma = 0;
    int cont = 0;
    bool teste;

    printf("Digite o número chave:\n");
    scanf("%f", &num_chave);

    printf("Digite um número:\n");
    scanf("%f", &num_dig);

    num_maior = num_menor = num_dig;
    soma = num_dig;
    cont = 1;
    teste = (num_chave == num_dig);

    while (!teste) {
        printf("Digite um número:\n");
        scanf("%f", &num_dig);
        
        teste = (num_chave == num_dig);
        
        if (num_dig > num_maior) {
            num_maior = num_dig;
        } else if (num_dig < num_menor) {
            num_menor = num_dig;
        }

        soma += num_dig;
        cont++;
    }


    media = soma / cont;

    printf("O maior número digitado foi %.2f, o menor foi %.2f\n", num_maior, num_menor);
    printf("A média dos números digitados foi %.2f\n", media);

    return 0;
}
