#include <stdio.h>

int main()
{
    int vetor[5];
    
    for (int i; i < 5; i++)
    {
        vetor[i] = i+5;
    }

    for (int i; i < 5; i++)
    {
        printf("Valor da variável da posição %i: %i\n", i, vetor[i]);
        printf("Endereço da variável da posição %i: %p\n\n", i, &vetor[i]);
    }

    return 0;
}
