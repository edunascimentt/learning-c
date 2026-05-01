#include <stdio.h>

int main()
{
    FILE *arquivo = fopen("saida.txt", "w");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fputs("Texto escrito no arquivo usando fputs.\n", arquivo);
    fclose(arquivo);
}