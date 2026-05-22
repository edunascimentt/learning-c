#include <stdio.h>

int somaVetor(int v[], int tamanho)
{
    int soma = 0, i;
    for (i = 0; i <tamanho; i++)
    {
        soma += v[i];
    }
    return soma;
}

int main()
{
    int numeros[4] = (2, 4, 6, 8);
    printf("Soma do vetor = %d\n", somaVetor(numeros, 4));

    return 0;
}