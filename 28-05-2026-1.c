#include <stdio.h>
#include <string.h>

int calcularTamanhoTexto(char texto[])
{
    int tamanho = strlen(texto);
    return tamanho - 1;
}

int main()
{
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    printf("Total de caracteres: %d\n", calcularTamanhoTexto(texto));

    return 0;
}
