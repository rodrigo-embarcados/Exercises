/*7. Soma dos fatores primos

Leia um número inteiro positivo n e calcule a soma de todos os seus fatores que são números primos.

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, soma = 0;
    bool primo = true;
    printf("Insira um número inteiro positivo n >= 2 e será calculada a soma de todos os seus fatores que são números primos: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            int j = 2;
            primo = true;
            while (primo == true && j <= i/2){
                if(i % j == 0){
                    primo = false;
                }
                j++;
            }
            if(primo == true) soma += i;
        }
        
    }
    printf("A soma dos fatores primos é: %d.", soma);
}
