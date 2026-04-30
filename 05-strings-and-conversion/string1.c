#include <stdio.h>
#include <stdlib.h>

// Converts a numeric string to an int with atoi().
int main()
{
    char minhaStringInt[] = "50";
    int i = atoi(minhaStringInt);

    printf("A soma de %d com 10 resulta em %d.\n", i, i + 10);

    return 0;
}

