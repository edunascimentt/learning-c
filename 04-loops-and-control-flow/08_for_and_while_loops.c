#include <stdio.h>

// Demonstrates the for loop and the while loop side by side.
int main()
{
    int numero = 0, numero2 = 0;

    for (numero = 0; numero <= 10; numero++)
    {
        printf("Estou no for loop %d\n", numero);
    }

    while (numero2 <= 10)
    {
        numero2++;
        printf("Estou no while loop %d\n", numero2);
    }

    return 0;

}