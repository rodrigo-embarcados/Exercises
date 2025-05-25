#include <stdio.h>

int main()
{
    int vidas[10];
    printf("Digite as vidas das 10 salas:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\tInforme o valor da %dª vida: ", i + 1);
        scanf("%d", &vidas[i]);
    }
    int max_vidas = vidas[0], soma_atual = vidas[0];
    for (int i = 1; i < 10; i++)
    {
        if (soma_atual < 0) soma_atual = vidas[i];
        else soma_atual += vidas[i];
        if (soma_atual > max_vidas) max_vidas = soma_atual;
    }
    printf("O máximo número de vidas que pode ser obtido é: %d\n", max_vidas);
    return 0;
}
