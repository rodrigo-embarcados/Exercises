//Programa para imprimir n termos da sequência de Fibonacci
//Este programa pede ao usuário para inserir um número e em seguida será impresso uma quantidade de termos
//da sequência de Fibonacci correspondente ao número inserido

#include<stdio.h>
int main(){
    int long long sequencia, primeiro_termo = 0, segundo_termo = 1; 
    int repeticao = 1, quantidade;
    printf("Insira um valor para imprimir n termos da sequencia de Fibonacci\n");
    scanf("%d", &quantidade);
    while(repeticao <= quantidade){
        printf("%lld ", primeiro_termo);
        sequencia = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = sequencia;
        repeticao++;
    }
}
