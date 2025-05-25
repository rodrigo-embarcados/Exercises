/******************************************************************************

3. Sequência de Fibonacci até um limite

Implemente um programa que gere todos os números da sequência de Fibonacci menores que um limite L fornecido pelo usuário.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int limite, sequencia = 0, termo1 = 0, termo2 = 1 ;
    printf("Insira um número e será impresso todos os termos da sequência de Fibonacci menores que ele: ");
    scanf("%d", &limite);
    while(termo1 < limite){
        printf((sequencia < limite) ? "%d, " : "%d.", termo1);
        sequencia  =  termo1 + termo2;
        termo1 = termo2;
        termo2 = sequencia;
    } 
    return 0;
}
