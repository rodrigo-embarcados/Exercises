/******************************************************************************

Imprimir múltiplos de 3 ímpares entre 0 e 1000

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont = 0;
    printf("Os múltiplos de 3 que são impares entre 0 e 1000 são:\n");
    for(int i = 0; i <= 1000; i+= 3){
        if(i % 2 != 0){
            printf(i < 999 ? "%d, " : "%d.", i);
            cont++;
        }
    }
    printf("\n\nHá %d múltiplos de 3 ímpares entre 0 e 1000.", cont);
}