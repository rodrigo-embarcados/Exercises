/******************************************************************************

Exercício 3: Sequência Fibonacci (sem recursão)
Descrição:
Implemente a sequência de Fibonacci até o N-ésimo termo usando apenas estruturas de repetição. 
A sequência começa com 0 e 1, e os termos seguintes são obtidos somando os dois termos anteriores.

*******************************************************************************/
#include <stdio.h>

int main() {
    int qnt_termos, termo1 = 0, termo2 = 1, sequencia;
    printf("Insira um valor para imprimir n termos da sequencia de Fibonacci: ");
    scanf("%d", &qnt_termos);
    printf("Os primeiros %d termos da sequência de Fibonacci são: ", qnt_termos);
    for (int i = 1; i <= qnt_termos; i++){
        printf((i == qnt_termos) ? "%d." : "%d, ", termo1);
        sequencia = termo1 + termo2;
        termo1 = termo2;
        termo2 = sequencia;
    }
}