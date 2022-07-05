#include "determinante.h"
#include "../../estruturas/matriz/matriz.h"
#include <stdio.h>

void Determinante(int ordem_matriz)
{
    printf("* Rotina de Determinante *");
    printf("\nordem da matriz: %i\n", ordem_matriz);
    int matriz[SIZE][SIZE];
    ler_matriz(ordem_matriz, matriz);
    // printf("typeof: %s", typeof(ler_matriz(ordem_matriz)));
    // matriz = ler_matriz(ordem_matriz);
    // *matriz = 0;
    print_matriz(ordem_matriz, matriz);
}
