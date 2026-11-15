#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int ponto_calculado(string word)
{
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        // Pegue a letra na posição i
        char letter = toupper(word[i]);
        if (!isalpha(letter))
        {
            continue;
        }
        score = score + POINTS[letter - 'A'];
        // Some os pontos dessa letra usando POINTS
    }

    return score;
}

int main(void)
{
    // peça duas palavras ao usuário
    string ponto1 = get_string("Vez do primero jogador: \n");
    string ponto2 = get_string("Vez do segundo jogador: \n");

    // calcule qual possui mais letras
    int score1 = ponto_calculado(ponto1);
    int score2 = ponto_calculado(ponto2);

    // mostrar o vencedor
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
