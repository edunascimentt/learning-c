#include "stdio.h"

// Casting one operand to float forces floating-point division.
int main()
{
    printf("Trabalhando com variavel float\n");

    float meuFloat = (float)48 / 5;
    printf("%f\n", meuFloat);

    return 0;
}