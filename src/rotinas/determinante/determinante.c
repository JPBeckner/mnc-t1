#include "determinante.h"
#include "../../estruturas/matriz/matriz.h"
#include <stdio.h>

#define SIZE 100

int calcularCofator(int ordem_matriz, int matriz[SIZE][SIZE]){
    int determinante = 0, i = 1, j = 0, k = 0;
    int menorPrincipal[SIZE][SIZE];

    // for (i; i < ordem_matriz; i++){
    //     for (j; j < ordem_matriz; j++){
    //         menorPrincipal[i-1][j] = matriz[i][j];
    //     }
    // }
    if (ordem_matriz == 1){
        printf("M0x0 %i\n", matriz[0][0]);
        return matriz[0][0];
    }

    for (k; k < ordem_matriz; k++){

        for (i; i < ordem_matriz; i++){
            for (j; j < ordem_matriz; j++){
                if (j == k){
                    continue;
                }
                menorPrincipal[i-1][j] = matriz[i][j];
                printf("i %i j %i", i-1, j);
                printf("mp: %i, m: %i\n", menorPrincipal[i-1][j], matriz[i][j]);
            }
        }

        determinante += matriz[i][k] * calcularCofator(ordem_matriz-1, menorPrincipal);
        printf("aij %i\n", matriz[i][k]);
        printf("det %i\n", determinante);
    }

    return determinante;
}

void Determinante(int ordem_matriz)
{
    printf("\t* Rotina de Determinante *\n");
    printf("ordem da matriz: %i\n", ordem_matriz);
    
    int matriz[SIZE][SIZE];
    int determinante = 0;
    ler_matriz(ordem_matriz, matriz);
    print_matriz(ordem_matriz, matriz);
    determinante = calcularCofator(ordem_matriz, matriz);
    printf("\ndeterminante: %i\n", determinante);
}
