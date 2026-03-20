#include <stdio.h>

int main()
{
    int numero, y;
    numero = 11;
    y = 0;
    y = numero % 2 ? 1 : 0;
    printf("\n y vale %d \n", y); 

    return 0;
}