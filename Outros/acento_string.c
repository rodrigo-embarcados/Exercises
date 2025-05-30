#include <stdio.h>
#include <stdint.h>
#include <string.h>

char tira_acento_letra(uint8_t byte_ms)
{
  switch (byte_ms)
  {
    case 0xA1:
    case 0xA0:
    case 0xA2:
    case 0xA3:
      return 'a'; // á à â ã
    case 0xA9:
    case 0xAA:
      return 'e'; // é ê
    case 0xAD:
      return 'i'; // í
    case 0xB3:
    case 0xB4:
    case 0xB5:
      return 'o'; // ó ô õ
    case 0xBA:
    case 0xBC:
      return 'u'; // ú ü
    case 0xA7:
      return 'c'; // ç
    case 0x81:
    case 0x80:
    case 0x82:
    case 0x83:
      return 'A'; // Á À Â Ã
    case 0x89:
    case 0x8A:
      return 'E'; // É Ê
    case 0x8D:
      return 'I'; // Í
    case 0x93:
    case 0x94:
    case 0x95:
      return 'O'; // Ó Ô Õ
    case 0x9A:
    case 0x9C:
      return 'U'; // Ú Ü
    case 0x87:
      return 'C'; // Ç
  }
  return 0;
}
char *tira_acento_string(char *texto)
{
    char atual;
    uint8_t byte_ms;
    for(int i = 0; texto[i] != '\0'; i++)
    {
        atual = texto[i];
        if((uint8_t)atual == 0xC3)
        {
            byte_ms = (uint8_t)texto[i + 1];
            texto[i] = tira_acento_letra(byte_ms);
            for(int j = i + 1; texto[j] != '\0'; j++)
            {
                texto[j] = texto[j + 1];
            }
            i++;
        }
    }
    return texto;
}
int main()
{
    char texto[] = "Olá, o mundo é muito grande. Tem muitas pessoas, e muitos problemas";
    char *texto2 = tira_acento_string(texto);
    printf("%s\n", texto2);
}