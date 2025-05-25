#include <stdlib.h>
#include <stdio.h>

int main(){
        int a1, a2, a3, a4, dv, agencia, multi;

        printf("Insira sua agência no formato XXXX\n");
        scanf("%d", &agencia);
        a1 = agencia / 1000;
        a2 = (agencia % 1000) / 100;
        a3 = (agencia % 1000) % 100 / 10;
        a4 = (((agencia % 1000) % 1000) % 10);
        multi = ((a4 * 2) + (a3 * 3) + (a2 * 4) + (a1 * 5)) % 11;
        dv = 11 - multi;
        if (dv == 10){
            printf("Sua agência com o dígito verificador é: %d%d%d%d - x\n", a1, a2, a3, a4);
        }
        else {
            printf("Sua agência com o dígito verificador é: %d%d%d%d - %d \n", a1, a2, a3, a4, dv);
        }
}