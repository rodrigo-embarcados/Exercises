//Este programa calcula o quociente e resto de uma divisão entre dois números inteiros
 #include <stdio.h>
 
 int main(){
     int numero_1, numero_2, quociente, resto;
     printf("Este programa calcula o quociente e resto de uma\ndivisão entre dois números inteiros\n\n");
     printf("Digite o primeiro número\n");
     scanf("%d", &numero_1);
     printf("Digite o segundo número\n");
     scanf("%d", &numero_2);
     quociente = numero_1 / numero_2;
     resto = numero_1 % numero_2;
     printf("O quociente entre %d e %d é %d e o resto da divisão é %d", numero_1, numero_2, quociente, resto);
     return 0;
 }