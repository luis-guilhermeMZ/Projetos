#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int contar_letras(string text);
int contar_palavras(string text);
int contar_sentencas(string text);

int main(void)
{
    // Peça o texto
    string text = get_string("Text: ");

    // Conte o número de letras, palavras e sentenças no texto
    int letters = contar_letras(text);
    int words = contar_palavras(text);
    int sentences = contar_sentencas(text);

    // Calcular L
    float L = (float) letters / words * 100;

    // Calcular S
    float S = (float) sentences / words * 100;

    // Calcular a série
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int aproximado = (round(index));

    // Print the grade level
    if (aproximado < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (aproximado >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", aproximado);
    }
    return 0;
}

int contar_letras(string text)
{
    int letras = 0;

    // Retorne o numero de letras no texto
    for (int i = 0; i < strlen(text); i++)
    {
        char letter = (text[i]);
        if (isalpha(letter))
        {
            letras++;
        }
    }
    return letras;
}

int contar_palavras(string text)
{
    // Return the number of words in text
    int palavras = 0;

    // Retorne o numero de letras no texto
    for (int i = 0; i < strlen(text); i++)
    {
        char letter = (text[i]);
        if (!isspace(letter) && (i == 0 || isspace(text[i - 1])))
        {
            palavras++;
        }
    }
    return palavras;
}

int contar_sentencas(string text)
{
    // Return the number of sentences in text
    int sentencas = 0;

    // Retorne o numero de letras no texto
    for (int i = 0; i < strlen(text); i++)
    {
        char letter = (text[i]);
        if (letter == '.' || letter == '!' || letter == '?')
        {
            sentencas++;
        }
    }
    return sentencas;
}
