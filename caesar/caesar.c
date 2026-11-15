#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Confere se o usuário informou uma chave
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    // Garante que a chave contém apenas números
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Converte a chave em número e reduz a rotação ao alfabeto
    int key = atoi(argv[1]);
    key = key % 26;

    // Pede o texto que será criptografado
    string plaintext = get_string("plaintext:  ");

    // Mostra o início da linha criptografada
    printf("ciphertext: ");

    // Percorre o texto caractere por caractere
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        // Mantém espaços, números e pontuação sem alteração
        if (!isalpha(c))
        {
            printf("%c", c);
        }
        // Rotaciona letras maiúsculas dentro do alfabeto maiúsculo
        else if (isupper(c))
        {
            printf("%c", ((c - 'A' + key) % 26) + 'A');
        }
        // Rotaciona letras minúsculas dentro do alfabeto minúsculo
        else
        {
            printf("%c", ((c - 'a' + key) % 26) + 'a');
        }
    }

    // Termina a linha do texto criptografado
    printf("\n");
}
