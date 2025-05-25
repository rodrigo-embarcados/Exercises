//Programa para imprimir uma posição dada na sequência de Fibonacci
//Este programa pede ao usuário para inserir um número e em seguida será impresso a posição
//correspondente ao número inserido na sequência de Fibonacci

#include<stdio.h>
int main(){
    int long long sequencia, primeiro_termo = 0, segundo_termo = 1; 
    int repeticao = 1, quantidade;
    printf("Insira um valor para imprimir a n posição na sequencia de Fibonacci\n");
    scanf("%d", &quantidade);
    while(repeticao <= quantidade){
        sequencia = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = sequencia;
        repeticao++;
    }
    printf("%lld ", primeiro_termo);
}