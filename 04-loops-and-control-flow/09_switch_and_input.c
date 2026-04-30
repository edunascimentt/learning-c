#include <stdio.h>

// Keeps asking for a number until the user enters 99.
int main()
{
    int numero = 0;

    do
    {
        printf("Digite o número (99 para sair): ");
        scanf("%d", &numero);

        switch (numero)
        {
        case 1:
            printf("Número vale 1\n");
            break;
        case 2:
            printf("O número vale 2\n");
            break;
        default:
            printf("O seu número não é válido\n");
            break;
        }
    }

    while (numero != 99);

    return 0;
}