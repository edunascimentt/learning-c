#include <stdio.h>

int main()
{
    int numero;
    printf("Digite o número: ");
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
        printf("O teu número não vale nada");
        break;
    }
}