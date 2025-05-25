/******************************************************************************

Questão 1: Escreva um programa em C capaz de gerar um sequência númerica inteira, com as seguintes características:

- O primeiro número da sequência é uma entrada fornecida pelo usuário, sendo uma entrada válida inteiros não negativos e menores que 100
- A partir daí, o próximo número da sequência é obtido somando os quadrados dos dígitos do número anterior
- Caso este número seja maior ou igual a 100, o número da sequência é obtido através da divisão deste número por dois
- A sequencia se encerra quando um número repetido é encontrado (ciclo).

*******************************************************************************/
#include <stdio.h>

#define max 1000

int main()
{
    int vetor[max], numero, cont = 0, ciclo = 0, a1, a2;
    printf("Insira um número inteiro positivo menor que 100: ");
    while(1)                                                                                //Loop infinito para testar a variável
    {
        scanf("%d", &numero);                                                               //Guardo o número na variável número
        if(numero > 0 && numero < 100) break;                                               //Testo se está no limite, se sim, paro o loop
        else printf("Número inválido. Insira um número inteiro positivo menor que 100: ");  //Senão, exibo a mensagem para tentar de novo
    }
    while(ciclo < 1)                                                                        //Aqui, o loop vai até achar um número repetido
    {
        vetor[cont] = numero;                                                               //Atribuo o valor digitado à primeira posição
        cont++;                                                                             //Incremento cont, variável para mapear as posições
        a1 = numero / 10;                                                                   //Pego o algarismo mais significativo
        a2 = numero % 10;                                                                   //Pego o algarismo menos significativo
        numero = (a1 * a1) + (a2 * a2);                                                     //Calculo o próximo número da sequência
        if(numero >= 100) numero /= 2;                                                      //Vejo se é maior ou igual a 100, se sim, divido por 2
        for(int i = 0; i < cont; i++)                                                       //Testo se o número já não está na sequência
        {
            if(numero == vetor[i]) ciclo = 1;                                               //Se sim, ciclo vai para 1 e o loop while para
        }
    }
    printf("A sequência é: {");                                                             //A partir daqui a sequência é impressa usando operador ternário
    for(int i = 0; i < cont; i++)                                                           //para uma formatação com vírgula e espaço entre chaves.    
    {
        printf(i < cont - 1 ? "%d, " : "%d}.\n", vetor[i]);
    }
    return 0;
}