#include <stdio.h>
#include <string.h>

int main()
{
  int achou, indice[30], cont = 0;
  char busca[] = "aa";
  char texto[] = "maraaaavilha, meu prograaaama funcionou";
  for(int i = 0; i < strlen(texto) - strlen(busca); i++)
  {
    achou = 1;
    if(texto[i] == busca[0])
    {
      int j = 1;
      while(j < strlen(busca))
      {
        if(texto[i+j] == busca[j])
        {
          j++;
          continue;
        }
        else 
	      {
	        achou = 0;
	        break;
	      }
      }
      if(achou)
      {
        indice[cont++] = i + 1;
        indice[cont++] = i + strlen(busca);
      }
      i++;
    }
    
  }  
  if(achou)
  {
    printf("Palavra encontrada no(s) índice(s):\n");
    for(int i = 0; i < cont; i += 2)
    {
      printf(i < cont - 2 ? "\t%d a %d,\n" : "\t%d a %d.\n", indice[i], indice[i + 1]);
    }
  }
  else printf("Palavra não encontrada!\n");
}