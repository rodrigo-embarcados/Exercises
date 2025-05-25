#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int funcao(int a, int b, int c, int x){
    int y = a * x * x + b * x + c;
    return y;
}

int main(){
    int a, b, c, x, y;
    printf("Informe os coeficientes da equação do 2 grau:\n");
    printf("\t a: ");
    scanf("%d", &a);
    printf("\t b: ");
    scanf("%d", &b);
    printf("\t c: ");
    scanf("%d", &c);
    bool tem_raiz = false;
    while(x <= 1000){
        y = funcao(a, b, c, x);
        if (y == 0) {
            printf ("O número %d é raiz da equação.\n", x);
            tem_raiz = true;
//          break;  // se quiser saber só o primeiro número que é uma raíz, é só descomentar o break.
        }
        x++;
    }
    if (!tem_raiz){
        printf("Não há raízes inteiras!\n");
    }
}