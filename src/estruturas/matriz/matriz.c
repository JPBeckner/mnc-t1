#include "matriz.h"
#include <stdio.h>


// #define SIZE 100

void print_matriz(int linha, int coluna, float matriz[SIZE][SIZE])
{
    printf("\n\t-- Mostrando a matriz M%ix%i --\n\n", linha, coluna);
    for( int i = 0; i < linha; i++)
    {
        printf("|");
        for( int j = 0; j < coluna; j++)
        {
            printf(" %.2f ",  matriz[i][j]);
        }
        printf("|\n");
    }
}

void ler_matriz(int linha, int coluna, float matriz[SIZE][SIZE])
{
    int i = 0, j = 0;
    // int matriz[SIZE][SIZE];
    // printf("ordem: %ix%i\n", linha, coluna);
    int valor;
    // fflush(stdin);
    // printf("\nLendo a matriz M%ix%i.", linha, coluna);

    for( int i = 0; i < linha; i++)
    {
        for( int j = 0; j < coluna; j++)
        {
            printf("\nInforme o valor para M%ix%i\n", i+1, j+1);
            fflush(stdin);
            scanf("%i", &valor);
            matriz[i][j] = valor;
        }
    }
    // print_matriz(ordem_matriz, matriz);  // teste
}
