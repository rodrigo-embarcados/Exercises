#include<stdlib.h>
#include<stdio.h>

int main(){
    int linhas;
    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);
    for (int i = 1; i <= linhas; i++){
        for (int j = 1; j <= i; j++){
        printf("%d ", j);
        }
    printf("\n");
    }
}