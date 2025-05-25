/******************************************************************************

Questão 2:
A liga do reizinho resolveu inovar mais uma vez e adotou no seu campeoonato o seguinte sistema de pontuação:

O número de pontos de uma equipe é calculado exclusivamente em função da sequência formada pelo número de gols marcados nas suas partidas, 
não importando o resultado destas. Assim, considere que cada time joga P partidas P0, P1, ..., Pp-1, que são agrupadas em janelas sobrepostas de J partidas. 
A i-ésima janela é formada pelas partidas {pi, pi+1, ..., ppi+j-1}. Assim, a primeira janela do campeonato, (Janela 0) corresponde às partidas {p0, p1, ..., pj-1}, 
a segunda janela (Janela 1) corresponde às partidas {p1, p2, ..., pj}, e assim por diante, totalizando P-J+1 janelas no campeonato.

Sejam g0, g1, ..., gj-1 os gols marcados por uma equipe em uma determinada janela do campeonato. A pontuação da equipe nessa janela é dada pelo menor 
número de gols na janela em questão, somado ao maior número de gols na mesma janela: (min{g0, g1, ..., gj-1}) + (max{g0, g1, ..., gj-1}).
A pontuação total de um time no campeonato é igual ao somatório da sua pontuação em cada janela do campeonato.

Por exemplo, se um time jogou 5 partidas em um campeonato com janelas de 3 jogos, tendo marcado 1, 3, 2, 1, 4 gols, sua pontuação total
será igual a (min{1,3,2}+max{1,3,2}) + (min{3,2,1}+max{3,2,1}) + (min{2,1,4}+max{2,1,4}) = (1+3)+(1+3)+(1+4) = 13 pontos.

Sua tarefa é fazer um programa para calcular o número de pontos de uma equipe, dada a quantidade de gols marcados em cada uma das P partidas
do campeonato. Seu algoritmo deve ser genérico o suficiente, mas considere que o campeonato atual será composto de 5 partidas e janela de tamanho 3.

*******************************************************************************/
#include <stdio.h>

#define max 100

int main()
{
    int g_partidas[max], g_janela[max], janela, partidas, pontos = 0;
    printf("Insira o número de partidas desejadas: ");                      //Até o 1º for, somente obtenho os dados do usuário como número de partidas e janela
    scanf("%d", &partidas);                                                 
    printf("Insira o número da janela de gols desejada: ");
    scanf("%d", &janela);
    printf("Agora insira os números de gols por cada partida jogada:\n");
    for(int i = 0; i < partidas; i++)                                       //Aqui armazeno todos os gols de cada partida em um vetor de "partidas" posições
    {
        printf("\tPartida %d: ", i + 1);
        scanf("%d", &g_partidas[i]);
    }
    for(int i = 0; i < partidas - janela + 1; i++)                          //Nesse loop, itero até primeira posição da última janela no vetor g_partidas
    {
        for(int j = 0; j < janela; j++)                                     //Aqui pego a quantidade de gols de acordo com a janela e preencho o vetor g_janela
        {
            g_janela[j] = g_partidas[j + i];
        }
        for(int k = 0; k < janela - 1; k++)                                 //Aqui faço bubble sort no vetor g_janela
        {
            for(int l = 0; l < janela - k - 1; l++)
            {
                int temp;
                if(g_janela[l] > g_janela[l + 1])
                {
                    temp = g_janela[l];
                    g_janela[l] = g_janela[l + 1];
                    g_janela[l + 1] = temp;
                }
            }
        }
        pontos += g_janela[0] + g_janela[janela - 1];                       //Aqui acumulo a primera e ultima posição de g_janela a cada janela
    }
    printf("\nA equipe fez %d pontos no campeonato.\n", pontos);              //Aqui imprimo o número de pontos marcados na partida
    return 0;
}