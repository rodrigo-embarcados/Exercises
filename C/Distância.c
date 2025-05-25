/******************************************************************************
Dado o raio de 2 circunferências, e o ponto num plano cartesiano de cada uma delas, 
verifique se as circunferências se tocam, e caso positivo, se em 1 ou 2 pontos.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calcular_distancia(float x1, float y1, float x2, float y2)
{
    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return d;
}

int main()
{
    float x1, y1, x2, y2, r1, r2;
    printf("Informe a coordenada x da primeira circunferência\n:");
    scanf("%f", &x1);
    printf("Informe a coordenada y da primeira circunferência\n:");
    scanf("%f", &y1);
    printf("Informe a coordenada x da segunda circunferência\n:");
    scanf("%f", &x2);
    printf("Informe a coordenada y da segunda circunferência\n:");
    scanf("%f", &y2);
    printf("Informe o raio da primeira circunferência\n:");
    scanf("%f", &r1);    
    printf("Informe o raio da segunda circunferência\n:");
    scanf("%f", &r2);
    float d = calcular_distancia(x1, y1, x2, y2);
    float r_total = r1 + r2;
    if (d - r_total <= 0){
        printf("As circunferências se tocam ");
        if (d - r_total < 0){
            printf("em mais de um ponto.\n");
        }
        else if (d - r_total == 0){
            printf("em só um ponto.\n");
        }
    }
    else printf("As circunferências não se tocam.\n");
    printf("A distância entre as circunferências é de %.2f e a soma dos raios é %.2f\n", d, r_total);

    return 0;
}

/*Poderia ser feito primeiro testando se elas não se tocam (d > r_total) 
e depois com else, dentro dele, 2 ifs, para verificar se se tocam uma vez ou se se intersectam.*/