//Calculo nota semestral

#include <stdio.h>

int main(){
    float n1b1, n2b1, n1b2, n2b2, nota_semestre;
    printf("Este programa calcula a nota semestral. Insira 4 notas até 5.0, sendo duas por bimestre:\n");
    printf("Nota 1 do primeiro bimestre:\n");
    scanf("%f", &n1b1);
    printf("Nota 2 do primeiro bimestre:\n");
    scanf("%f", &n2b1);
    printf("Nota 1 do segundo bimestre:\n");
    scanf("%f", &n1b2);
    printf("Nota 2 do segundo bimestre:\n");
    scanf("%f", &n2b2);
    if (n1b1 && n2b1 && n1b2 && n2b2 <= 5.0){
        nota_semestre = ((n1b1 + n2b1) + (n1b2 + n2b2)) / 2;
        printf("A nota final é: %.2f\n", nota_semestre);
    }
    else
        printf("Você inseriu uma nota maior que 5.0!\n");
    return 0;
}