#include <stdio.h>

#include "matriz_inversa.h"   
#include "../decomposicao_lu/decomposicao_lu.h"


void calcularInversa(int ordem, float matriz[SIZE][SIZE], float inversa[SIZE][SIZE])
{
    float vetorTermos[SIZE], vetorS[SIZE];
    calcularDecomporLU(ordem, matriz, vetorTermos, vetorS);
    for (int i = 0; i < ordem; i++){

    }
}


void MatrizInversa()
{
    printf("\n***Rotina Matriz Inversa***\n");

    int ordem;
    float vetorTermos[SIZE], vetorS[SIZE];
    float matriz[SIZE][SIZE], inversa[SIZE][SIZE];

    printf("insira a ordem da matriz: ");
    scanf("%d", &ordem);
    
    printf("Informe os valores da matriz: \n");
    ler_matriz(ordem, ordem, matriz);

    calcularInversa(ordem, matriz, vetorTermos, vetorS);

}