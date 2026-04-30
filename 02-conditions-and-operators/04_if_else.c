#include <stdio.h>

// A simple if / else if / else chain.
int main()
{
    int numero = 15;

    if (numero == 10)
    {
        printf("O número e igual a 10\n");
    }
    else if (numero >= 10)
    {
        printf("O número e maior que 10\n");
    }
    else
    {
        printf("O número e menor que 10\n");
    }

    return 0;
}