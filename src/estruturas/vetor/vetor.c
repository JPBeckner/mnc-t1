#include "vetor.h"
#include <stdio.h>

void print_vetor(int ordem_vetor, float vetor[SIZE])
{
    printf("|");
    for( int i = 0; i < ordem_vetor; i++)
    {
        printf(" %.2f ",  vetor[i]);
    }
    printf("|\n");

}

void ler_vetor(int ordem_vetor, float vetor[SIZE]){

    int valor;
    fflush(stdin);
    printf("\nLendo o vetor V.");

    for( int i = 0; i < ordem_vetor; i++)
    {
        printf("\nInforme o valor para V[%i]\n", i+1);
        fflush(stdin);
        scanf("%i", &valor);
        fflush(stdin);
        vetor[i] = valor;
    }
    print_vetor(ordem_vetor, vetor);
}
