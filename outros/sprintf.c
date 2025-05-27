#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont = 0;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        cont++;
    }
    printf("O número %d tem %d algarismos.\n", num, cont);
    char *ptr = malloc((cont + 1) * sizeof(char));
    sprintf(ptr, "%d", num);
    printf("A variável num convertida para string: %s\n", ptr);
    return 0;
}