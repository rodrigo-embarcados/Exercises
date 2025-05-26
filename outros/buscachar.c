#include <stdint.h>
#include <stdio.h>
#include <string.h>

char tira_acento_letra(uint8_t byte_ms)
{
    switch(byte_ms)
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
    return 0; // não é acentuado conhecido
}

int q3(const char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = 0;
    uint8_t byte_ms;
    char atual;
    for(int i = 0; i < strlen(texto); i++)
    {
        atual = texto[i];
        if((uint8_t)atual == 0xC3)
        {
            byte_ms = (uint8_t)texto[i + 1];
            atual = tira_acento_letra(byte_ms);
            i += 1;
        }
        if(isCaseSensitive == 1)
        {
            if(atual == c) qtdOcorrencias++;
        }
        else
        {
            if(c >= 'a' && (atual == c || atual + 32 == c)) qtdOcorrencias++;
            else if(c <= 'Z' && (atual == c || atual - 32 == c)) qtdOcorrencias++;
        }
    }
    return qtdOcorrencias;
}
int main()
{
    char str[250];
    strcpy(str, "Renato Lima Novais");
    printf("%d\n", q3(str, 'a', 0) == 3); // 0
    printf("%d\n", q3(str, 'b', 0) == 0); // 1
    printf("%d\n", q3(str, 'l', 1) == 0); // 2
    printf("%d\n", q3(str, 'l', 0) == 1); // 3
    printf("%d\n", q3(str, 'L', 0) == 1); // 4

    // Adicionadas
    strcpy(str, "Letícia, signifiCa fEliCIdADE");
    printf("%d\n", q3(str, 'c', 0) == 3); // 5
    printf("%d\n", q3(str, 'C', 0) == 3); // 6
    printf("%d\n", q3(str, 'c', 1) == 1); // 7
    printf("%d\n", q3(str, 'C', 1) == 2); // 8
    printf("%d\n", q3(str, 'R', 0) == 0); // 9
    printf("%d\n", q3(str, 'e', 0) == 3); // 10
    printf("%d\n", q3(str, 'E', 1) == 2); // 11
    printf("%d\n", q3(str, 'S', 1) == 0); // 12

    // Teste 1
    strcpy(str, "João correu com José na praça.");
    printf("%d\n", q3(str, 'o', 0) == 5); // 13
    printf("%d\n", q3(str, 'O', 0) == 5); // 14
    printf("%d\n", q3(str, 'o', 1) == 5); // 15
    printf("%d\n", q3(str, 'O', 1) == 0); // 16
    printf("%d\n", q3(str, 'a', 0) == 4); // 17
    printf("%d\n", q3(str, 'a', 1) == 4); // 18

    // Teste 2
    strcpy(str, "Música é a alma da vida.");
    printf("%d\n", q3(str, 'a', 0) == 6); // 19
    printf("%d\n", q3(str, 'a', 1) == 6); // 20
    printf("%d\n", q3(str, 'u', 0) == 1); // 21
    printf("%d\n", q3(str, 's', 0) == 1); // 22
    printf("%d\n", q3(str, 'S', 1) == 0); // 23

    // Teste 3
    strcpy(str, "Árvore, àrvore, ârvore, ãrvore!");
    printf("%d\n", q3(str, 'a', 0) == 4); // 24
    printf("%d\n", q3(str, 'A', 0) == 4); // 25
    printf("%d\n", q3(str, 'a', 1) == 3); // 26
    printf("%d\n", q3(str, 'A', 1) == 1); // 27
    printf("%d\n", q3(str, 'r', 0) == 8); // 28

    // Teste 4
    strcpy(str, "Época de férias: verão, música e diversão!");
    printf("%d\n", q3(str, 'e', 0) == 6); // 29
    printf("%d\n", q3(str, 'E', 1) == 1); // 30
    printf("%d\n", q3(str, 'a', 0) == 5); // 31
    printf("%d\n", q3(str, 'i', 0) == 3); // 32
    printf("%d\n", q3(str, 'o', 0) == 3); // 33

    // Teste 5
    strcpy(str, "Fácil ou difícil?");
    printf("%d\n", q3(str, 'i', 0) == 4); // 34
    printf("%d\n", q3(str, 'i', 1) == 4); // 35
    printf("%d\n", q3(str, 'f', 0) == 2); // 36
    printf("%d\n", q3(str, 'f', 1) == 1); // 37
    printf("%d\n", q3(str, 'l', 0) == 2); // 38
    return 0;
}
