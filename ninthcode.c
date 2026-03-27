#include <stdio.h>

int main()
{
    int numero;
    while (numero != 99)
    {

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
            printf("O seu número não é válido\n");
            break;
        }
    }
}