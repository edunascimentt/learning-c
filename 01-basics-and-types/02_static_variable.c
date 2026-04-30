#include <stdio.h>

// A static local variable keeps its value between function calls.
void meuMetodoEstatico()
{
    static int minhaIdade = 45;

    printf("%d\n", minhaIdade);
    minhaIdade++;
}

int main()
{
    meuMetodoEstatico();
    meuMetodoEstatico();
    meuMetodoEstatico();

    return 0;
}