#include <stdio.h>

void print_vetor(int ordem_vetor, int vetor[100][100])
{
    for( int i = 0; i < ordem_vetor; i++)
    {
        printf("|");
        for( int j = 0; j < ordem_vetor; j++)
        {
            printf(" %i ",  vetor[i][j]);
        }
        printf("|\n");
        // TODO: por que o print sai cagado dps da primeira linha???
    }

}

void ler_vetor(int ordem_vetor )
{
    int i = 0, j = 0;
    int vetor[ordem_vetor][ordem_vetor];
    int valor;
    fflush(stdin);
    printf("\nLendo a vetor M.");

    for( int i = 0; i < ordem_vetor; i++)
    {
        for( int j = 0; j < ordem_vetor; j++)
        {
            printf("\nInforme o valor para M%ix%i\n", i+1, j+1);
            fflush(stdin);
            scanf("%i", &valor);
            fflush(stdin);
            vetor[i][j] = valor;
            printf("\nTESTE: %i\n", vetor[i][j]);
        }
    }
    print_vetor(ordem_vetor, vetor);
}
