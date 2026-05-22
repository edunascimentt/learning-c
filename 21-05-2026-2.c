#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[51];
    int i;

    printf("Digite uma palavra: ");
    fgets(palavra, 51, stdin);

    for (i = strlen(palavra) - 2; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }

    return 0;
}