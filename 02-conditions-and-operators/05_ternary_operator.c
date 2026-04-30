#include <stdio.h>

// The ternary operator is a compact way to choose between two values.
int main()
{
    int numero = 11;
    int y = numero % 2 == 0 ? 1 : 0;

    printf("y vale %d\n", y);

    return 0;
}