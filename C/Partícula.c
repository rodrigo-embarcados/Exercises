/******************************************************************************

Há uma particula que passa por um determinado ponto a 30km/h. Quantas horas leva
para chegar a 10.000 km/h?

*******************************************************************************/
#include <stdio.h>

int main()
{   
    float vel = 30;
    int horas = 0;
    while (vel <= 10000){
        vel += (vel*0.1);
        horas++;
    }
    printf("São necessárias %d horas para a partícula atingir 10.000Km/h.", horas);
    return 0;
}