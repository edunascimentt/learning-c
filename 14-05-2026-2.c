#include <stdio.h>

void tabuada(int numero)
{
    int i;

    for (i = 0; i < 10001; i++)
    {   
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main()
{
    int numero;
    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);
    tabuada(numero);
}