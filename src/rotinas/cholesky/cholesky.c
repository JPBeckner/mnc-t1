#include <stdio.h>
#include <math.h>

#include "cholesky.h"   
#include "../../estruturas/matriz/matriz.h"


void calcularCholesky(int ordem, float matriz[SIZE][SIZE], float matrizA[SIZE][SIZE])
{
    int i, j;

    matrizA[0][0] = sqrt(matriz[0][0]);

}

int isSimetrica(int ordem, float matriz[SIZE][SIZE])
{
    for (int i = 1; i < ordem; i++){
        if(matriz[0][i] != matriz[i][0]) {
            return 0;  // false
        }
    }
    return 1;  // true
}


void Cholesky()
{
    printf("\n***Rotina Cholesky***\n");

    int ordem;

    printf("Informe a ordem da matriz:\n");
    scanf("%d", &ordem);

	int i, j, k = 0, sim = 1;    
	float matriz[SIZE][SIZE], matrizA[SIZE][SIZE];
    float vetor[SIZE];       

    printf("Informe os valores da matriz:\n");
    ler_matriz(ordem, ordem, matriz);

    if (isSimetrica(ordem, matriz) == 0){
        printf("Matriz nao simetrica.\n");
        return;
    }

    calcularCholesky(ordem, matriz, matrizA);

    print_matriz(ordem, ordem, matrizA);

}