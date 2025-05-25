//Programa conversor de m/s para Km/h

#include <stdio.h>

int main(){
    float m_s, km_h;
    printf("Insira uma velocidade em m/s e será exibido o valor em Km/h\n");
    scanf("%f", &m_s);
    km_h = m_s * 3.6;
    printf("O valor %.2f em m/s é %.2f em Km/h", m_s, km_h);
    return 0;
}