/******************************************************************************
A seguinte equação descreve o funcionamento de uma polia no espaço tridimencional
3x² + 2y³ - 7z² = 0
Quais valores inteiros satisfazem a equação entre 0 - 100000.

*******************************************************************************/
#include <stdio.h>
#define MAX 10000

int main()
{
    int x, y, z;
    printf("As variáveis que servem dentro do intervalo de 0 a 10000 são: \n");
    for(x = 0; x < MAX; x++){
        for(y = 0; y < MAX; y++){
           for(z = 0; z < MAX; z++){
               if ((3 * x*x) + (2 * y*y*y) - (7 * z*z) == 0){
                   printf("\t x = %d, y = %d, z = %d \n", x, y, z);
               }
           } 
        }
    }
    return 0;
}