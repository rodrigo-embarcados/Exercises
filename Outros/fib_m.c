#include <stdio.h>

#define MAX 100
int memo[MAX];

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;
    
    if (memo[n] != -1)  // já calculado
        return memo[n];
    
    memo[n] = fib(n - 1) + fib(n - 2);  // calcula e armazena
    return memo[n];
}

int main() {
    int n;
    scanf("%d", &n);

    // inicializa o vetor com -1 (indicando "não calculado")
    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    printf("%d\n", fib(n));
    return 0;
}
