#include <stdio.h>

int main ()
{
    char palavra[51];
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 51, stdin);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        // verificar se o caractere é uma vogal
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U')
            {
                vogais++;
            }
    }

    printf("O numero de vogais na palavra e: %d\n", vogais);

    return 0;

}