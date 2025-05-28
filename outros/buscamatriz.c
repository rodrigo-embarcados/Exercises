int q7(char matriz[8][10], char palavra[5])
{
    int linhas = 8;
    int colunas = 10;
    int tam_palavra = strlen(palavra);
    int dir_linha[8]  = {  0,  0,  1, -1,  1,  1, -1, -1 };
    int dir_coluna[8] = {  1, -1,  0,  0,  1, -1,  1, -1 };
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            for (int d = 0; d < 8; d++)
            {
                int achou = 1;
                for (int k = 0; k < tam_palavra; k++)
                {
                    int nova_linha = i + k * dir_linha[d];
                    int nova_coluna = j + k * dir_coluna[d];
                    if (nova_linha < 0 || nova_linha >= linhas || nova_coluna < 0 || nova_coluna >= colunas)
                    {
                        achou = 0;
                        break;
                    }
                    if (matriz[nova_linha][nova_coluna] != palavra[k])
                    {
                        achou = 0;
                        break;
                    }
                }
                if (achou)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}