#include "determinante.h"
#include "../../estruturas/matriz/matriz.h"
#include <stdio.h>
#include <math.h>


int calcularDeterminante(int ordem_matriz, float matriz[SIZE][SIZE])
{
    
    if (ordem_matriz == 1){
        return matriz[0][0];
    }
    
    int determinante = 0, i = 1, j = 0, k = 0;
    float menorPrincipal[SIZE][SIZE];

    for (k; k < ordem_matriz; k++){
        for (int i = 1; i < ordem_matriz; i++){
            for (int j = 0; j < ordem_matriz; j++){
                if (j == k){
                    continue;
                }
                int MPj = (j == 0) ? 0 : j - 1;
                menorPrincipal[i-1][MPj] = matriz[i][j];
            }
        }
        int cofator = pow(-1, i+(k+1)) * calcularDeterminante(ordem_matriz-1, menorPrincipal);
        determinante += matriz[0][k] * cofator;
    }

    return determinante;
}

int Determinante(int ordem_matriz)
{
    printf("\t* Rotina de Determinante *\n");
    printf("ordem da matriz: %i\n", ordem_matriz);
    
    float matriz[SIZE][SIZE];
    int determinante = 0;

    ler_matriz(ordem_matriz, ordem_matriz, matriz);

    print_matriz(ordem_matriz, ordem_matriz, matriz);

    determinante = calcularDeterminante(ordem_matriz, matriz);

    printf("\ndet(M): %i\n", determinante);
    return determinante;
}
