#include "determinante.h"
#include "../../estruturas/matriz/matriz.h"
#include <stdio.h>
#include <math.h>

#define SIZE 100

int calcularCofator(int ordem_matriz, int matriz[SIZE][SIZE]){
    
    printf("ordem: %i\n", ordem_matriz);
    if (ordem_matriz == 1){
        printf("M0x0 %i\n", matriz[0][0]);
        return matriz[0][0];
    }
    
    int determinante = 0, i = 1, j = 0, k = 0;
    int menorPrincipal[SIZE][SIZE];

    for (k; k < ordem_matriz; k++){
        printf("K %i\n", k);
        for (int i = 1; i < ordem_matriz; i++){
            printf("iter i %i\n", i);
            for (int j = 0; j < ordem_matriz; j++){
                if (j == k){
                    continue;
                }
                int MPj = (j == 0) ? 0 : j -1;
                printf("iter j %i\n", j);
                menorPrincipal[i-1][MPj] = matriz[i][j];
                printf("i-1 %i j-1 %i\n", i-1, j-1);
                printf("mp: %i, m: %i\n", menorPrincipal[i-1][j-1], matriz[i][j]);
            }
        }
        int cofator = pow(-1, i+(k+1)) * calcularCofator(ordem_matriz-1, menorPrincipal);
        printf("cof %i\n", cofator);
        printf("i %i j %i\n", i, j);
        printf("matriz[0][k] %i \n", matriz[0][k]);
        determinante += matriz[0][k] * cofator;
        printf("aij %i\n", matriz[0][k]);
        printf("det %i\n", determinante);
    }

    return determinante;
}

int Determinante(int ordem_matriz)
{
    printf("\t* Rotina de Determinante *\n");
    printf("ordem da matriz: %i\n", ordem_matriz);
    
    int matriz[SIZE][SIZE];
    int determinante = 0;
    ler_matriz(ordem_matriz, matriz);
    print_matriz(ordem_matriz, matriz);
    determinante = calcularCofator(ordem_matriz, matriz);
    printf("\ndet(M): %i\n", determinante);
    return determinante;
}
