#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separa_data(char *data, char *sDia, char *sMes, char *sAno)
{
  int pos = 0;
  for(int i = 0; i < 5; i++)
  {
    if (i < 2)
    {
      sDia[i] = '\0';
      sMes[i] = '\0';
    }
    sAno[i] = '\0';
  }
  if(strlen(data) >= 6)
  {
    int i = 0;
    while(data[pos] != '/')
    {
      if(pos < 2)
      {
        sDia[i] = data[pos];
        pos++;
        i++;
      }
      else break;
    }
    pos++;
    i = 0;
    while(data[pos] != '/')
    {
      if(pos < 5)
      {
        sMes[i] = data[pos];
        pos++;
        i++;
      }
      else break;  
    }
    pos++;
    i = 0;
    while(data[pos] != '\0')
    {
      if(pos < 10)
      {
        sAno[i] = data[pos];
        pos++;
        i++;
      }
      else break;
    }
  }
}

int main()
{
  char data1[] = "11/10/1988", data2[] = "23/09/1992", data3[] = "26/05/2025";
  char data4[] = "1/1/1988", data5[] = "2/09/1992", data6[] = "26/5/25", data7[] = "1/1/11";
  char dia1[3], dia2[3], dia3[3], dia4[3], dia5[3], dia6[3], dia7[3]; 
  char mes1[3], mes2[3], mes3[3], mes4[3], mes5[3], mes6[3], mes7[3];
  char ano1[5], ano2[5], ano3[5], ano4[5], ano5[5], ano6[5], ano7[5];
  separa_data(data1, dia1, mes1, ano1);
  separa_data(data2, dia2, mes2, ano2);
  separa_data(data3, dia3, mes3, ano3);
  separa_data(data4, dia4, mes4, ano4);
  separa_data(data5, dia5, mes5, ano5);
  separa_data(data6, dia6, mes6, ano6);
  separa_data(data7, dia7, mes7, ano7);
  dia1[2] = '\0'
  dia1[2] = '\0'
  dia1[2] = '\0'
  dia1[2] = '\0'
  printf("Data junta: %s\n", data1);
  printf("Data separada: %s do %s de %s.\n", dia1, mes1, ano1);
  printf("Data junta: %s\n", data2);
  printf("Data separada: %s do %s de %s.\n", dia2, mes2, ano2);
  printf("Data junta: %s\n", data3);
  printf("Data separada: %s do %s de %s.\n", dia3, mes3, ano3);
  printf("Data junta: %s\n", data4);
  printf("Data separada: %s do %s de %s.\n", dia4, mes4, ano4);
  printf("Data junta: %s\n", data5);
  printf("Data separada: %s do %s de %s.\n", dia5, mes5, ano5);
  printf("Data junta: %s\n", data6);
  printf("Data separada: %s do %s de %s.\n", dia6, mes6, ano6);
  printf("Data junta: %s\n", data7);
  printf("Data separada: %s do %s de %s.\n", dia7, mes7, ano7);
  return 0;
}
