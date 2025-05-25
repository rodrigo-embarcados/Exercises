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

#define pos 100

int main()
{
    int g_partidas[pos], partidas, min, max, janela, pontos = 0;
    printf("Insira o número de partidas desejadas: ");              //Entrada de dados
    scanf("%d", &partidas);
    printf("Insira o tamanho da janela: ");
    scanf("%d", &janela);
    printf("Agora insira os gols de cada partida:\n");
    for (int i = 0; i < partidas; i++)                              //Preencho o vetor g_partidas com a entrada do usuário usando um laço for
    {
        printf("\tPartida %d: ", i + 1);
        scanf("%d", &g_partidas[i]);
    }
    for (int i = 0; i <= partidas - janela; i++)                    //Cálculo dos pontos a cada janela
    {
        min = max = g_partidas[i];                                  //Inicializei as variáveis max e min com o primeiro valor da janela
        for (int j = 1; j < janela; j++)                            //Percorre os elementos da janela
        { 
            if (g_partidas[i + j] < min) min = g_partidas[i + j];   //Faço comparação com condicional para saber o max e min da janela
            if (g_partidas[i + j] > max) max = g_partidas[i + j];
        }
        pontos += min + max;                                        //Acumulo tudo numa variável
    }
    printf("\nA equipe fez %d pontos no campeonato.\n", pontos);
    return 0;
}