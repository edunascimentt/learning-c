#include <stdio.h>

// Demonstrates the main primitive C types and how printf formats each one.
int main()
{
    // One variable for each common type.
    int meuinteiro = 10;
    double meudouble = 1800.7;
    char meuchar = 'J';
    float meufloat = 15.20f;

    printf("Inteiro: %d\n", meuinteiro);
    printf("Double: %lf\n", meudouble);
    printf("Char: %c\n", meuchar);
    printf("Float: %f\n", meufloat);

    return 0;
}
