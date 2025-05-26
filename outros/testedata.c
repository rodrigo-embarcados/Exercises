/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)
    pode utilizar strlen para pegar o tamanho da string
  // quebrar a string data em strings sDia, sMes, sAno

  // printf("%s\n", data);
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sDia[3], sMes[3], sAno[5];
    char data [] = "1/1/00";
    int pos = 0;
    for(int i = 0; i < 5; i++)
    {
        if(i < 2)   
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
            else
            {
                datavalida = 0;
                break;
            }
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
            else
            {
                datavalida = 0;
                break;
            }
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
            else
            {
                datavalida = 0;
                break;
            }
        }
    }
    else datavalida = 0;
    sDia[2] = '\0';
    sMes[2] = '\0';
    sAno[4] = '\0';

    if(dataValida)
    {  
        printf("%s\n", sDia);
        printf("%s\n", sMes);
        printf("%s\n", sAno);
    }
    else printf("Data Inválida!\n");
    return 0;
}




























