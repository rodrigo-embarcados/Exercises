/******************************************************************************

4. Uma empresa concederá um aumento de salário aos seus funcionários, variável de
acordo com o cargo, conforme a tabela abaixo. Faça um programa que leia o salário e
o cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não
estiver na tabela, ele deverá então receber 40% de aumento. Mostre o salário antigo,
o novo salário e a diferença.
•Cargo          Percentual
•Gerente        10%
•Engenheiro     20%
•Técnico        30%

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char cargo[20];
    float salario, novo_salario;
    printf("Insira o nome do cargo para saber qual aumento: ");
    fgets(cargo, sizeof(cargo), stdin);
    cargo[strcspn(cargo, "\n")] = '\0';
    printf("Agora insira o salário atual do cargo: ");
    scanf("%f", &salario);
    if(strcmp(cargo, "Gerente") == 0)
    {
        novo_salario = salario * 1.1;
        printf("O salário do %s passou de %.2f para %.2f. Houve %.2f de diferença.\n", cargo, salario, novo_salario, novo_salario - salario);
    }
    else if(strcmp(cargo, "Engenheiro") == 0)
    {
        novo_salario = salario * 1.2;
        printf("O salário do %s passou de %.2f para %.2f. Houve %.2f de diferença.\n", cargo, salario, novo_salario, novo_salario - salario);
    }
    else if(strcmp(cargo, "Tecnico") == 0)
    {
        novo_salario = salario * 1.3;
        printf("O salário do %s passou de %.2f para %.2f. Houve %.2f de diferença.\n", cargo, salario, novo_salario, novo_salario - salario);
    }
    else
    {
        novo_salario = salario * 1.4;
        printf("O salário do %s passou de %.2f para %.2f. Houve %.2f de diferença.\n", cargo, salario, novo_salario, novo_salario - salario);
    }
    return 0;
}