#include <stdio.h>
#include <string.h>
#include <locale.h>


int calcularTamanho(char entrada[])
{
    int tamanho;
    tamanho = strlen(entrada);
    
    return tamanho;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char entrada[100];
    int tamanho = calcularTamanho(entrada);

    printf("Digite um texto: ");
    fgets(entrada, 100, stdin);

    if (tamanho > 20)
    {
        printf("O texto é muito longo.\n");
    }

    else
    {
        printf("O texto é curto.\n");
    }
}