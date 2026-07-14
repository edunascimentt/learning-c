#include <stdio.h>
#include <string.h>
#include <locale.h>

int calcularTamanho(char entrada[])
{
    int tamanho;
    tamanho = strlen(entrada);

    return tamanho - 1;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char entrada[100];

    printf("Digite um texto: ");
    fgets(entrada, 100, stdin);

    int tamanho = calcularTamanho(entrada);

    printf("O tamanho do texto é: %d\n", tamanho);

    if (tamanho % 2 == 0)
    {
        printf("O texto tem um número par de caracteres.\n");
    }

    else
    {
        printf("O texto tem um número ímpar de caracteres.\n");
    }

    return 0;
}