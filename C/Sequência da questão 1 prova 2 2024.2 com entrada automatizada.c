/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define max 100

int main()
{
    int vetor[max], numero, cont, ciclo, a1, a2, entrada = 0;
    while(entrada < 100)
    {
        cont = 0, ciclo = 0, numero = entrada;
        printf("A sequência de %d é: {", entrada);
        while(ciclo < 1) 
        {
            vetor[cont] = numero;                                                               
            cont++;                                                                             
            a1 = numero / 10;                                                                  
            a2 = numero % 10;                                                                 
            numero = (a1 * a1) + (a2 * a2);                                                    
            if(numero >= 100) numero /= 2;                                                      
            for(int i = 0; i < cont; i++)                                                       
            {
                if(numero == vetor[i]) ciclo = 1;                                               
            }
        }                                                            
        for(int i = 0; i < cont; i++)                                                               
        {
            printf(i < cont - 1 ? "%d, " : "%d}.\n", vetor[i]);
        }
        printf("A sequência de %d tem %d número(s).\n", entrada, cont);
        entrada++;
    }
    return 0;
}