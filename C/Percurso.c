#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2)
{
    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return d;
}

float calcular_tempo(float t1, float t2)
{
    float t = t2 + t1;
    return t;
}


int main()
{
    float x1 = 0;
    float y1 = 0;
    float t1 = 0;
    float t2;

    float x2;
    float y2;
    printf("Informe a coordenada x do próximo ponto:");
    scanf("%f", &x2);
    printf("Informe a coordenada y do próximo ponto:");
    scanf("%f", &y2);
    printf("Informe o tempo gasto para o próximo ponto:");
    scanf("%f", &t2);
    float distancia_total = 0;
    float tempo_total = 0;
    while (x2 != 0 && y2 != 0)
    {
        float d = calcular_distancia(x1, y1, x2, y2);
        distancia_total = distancia_total + d;
        float t = calcular_tempo(t1, t2);
        tempo_total = tempo_total + t;
        x1 = x2;
        y1 = y2;
        printf("Informe a coordenada x do próximo ponto:");
        scanf("%f", &x2);
        printf("Informe a coordenada y do próximo ponto:");
        scanf("%f", &y2);
        printf("Informe o tempo gasto para o próximo ponto:");
        scanf("%f", &t2);
    }
    float d = calcular_distancia(x1, y1, x2, y2);
    distancia_total = distancia_total + d;
    float t = calcular_tempo(t1, t2);
    tempo_total = tempo_total + t;
    printf("Fim do percurso. Distância percorrida: %.2f m, Tempo gasto: %.2f s e Velocidade média: %.2f m/s\n", distancia_total, tempo_total, distancia_total/tempo_total);
}