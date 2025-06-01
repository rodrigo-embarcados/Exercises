#include <stdio.h>

void merge(int vetor1[], int n1, int vetor2[], int n2, int vetor_resultado[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (vetor1[i] < vetor2[j])
            vetor_resultado[k++] = vetor1[i++];
	    else
	        vetor_resultado[k++] = vetor2[j++];    
    }
    while (i < n1)
        vetor_resultado[k++] = vetor1[i++];
    while (j < n2)
        vetor_resultado[k++] = vetor2[j++];
}

int main()
{
   int vetor1[] = {1, 3, 5, 7};
   int vetor2[] = {2, 4, 6, 8};
   int n1 = sizeof(vetor1) / sizeof(vetor1[0]);
   int n2 = sizeof(vetor2) / sizeof(vetor2[0]);
   int vetor_resultado[n1 + n2];

   merge(vetor1, n1, vetor2, n2, vetor_resultado);
   printf("{");
   for(int i = 0; i < n1 + n2; i++)
   {
       printf(i < (n1 + n2) - 1 ? "%d, " : "%d}.\n", vetor_resultado[i]);
   }
   return 0;
}
