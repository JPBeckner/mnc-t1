#include <stdio.h>


#define SIZE 100

void print_matriz(int ordem_matriz, int matriz[SIZE][SIZE])
{
    printf("\n\t-- Mostrando a matriz M%ix%i --\n\n", ordem_matriz, ordem_matriz);
    for( int i = 0; i < ordem_matriz; i++)
    {
        printf("|");
        for( int j = 0; j < ordem_matriz; j++)
        {
            printf(" %i ",  matriz[i][j]);
        }
        printf("|\n");
    }
}

void ler_matriz(int ordem_matriz, int matriz[SIZE][SIZE])
{
    int i = 0, j = 0;
    // int matriz[SIZE][SIZE];
    printf("ordem: %i\n", ordem_matriz);
    int valor;
    // fflush(stdin);
    printf("\nLendo a matriz M%ix%i.", ordem_matriz, ordem_matriz);

    for( int i = 0; i < ordem_matriz; i++)
    {
        for( int j = 0; j < ordem_matriz; j++)
        {
            printf("\nInforme o valor para M%ix%i\n", i+1, j+1);
            fflush(stdin);
            scanf("%i", &valor);
            matriz[i][j] = valor;
        }
    }
    // print_matriz(ordem_matriz, matriz);  // teste
}
