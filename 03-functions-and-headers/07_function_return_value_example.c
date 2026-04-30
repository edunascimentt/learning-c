#include <stdio.h>
#include "06_functions.h"

// Calls the shared functions and stores the return value before printing it.
int main()
{
    estudo();
    teste();

    int resultado = soma(15, 15);
    printf("Soma: %d\n", resultado);

    return 0;
}