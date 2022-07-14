#include <stdio.h>
#include <math.h>

#include "geral.h"
#include "../rotinas/determinante/determinante.h"


int isZero(float number)
{
    /*
    durante o desenvolvimento notou-se a necessidade
    de verificar o valor do float por conta de arredondamento e lixo
    de memória, para ser um 0(zero) aceitável.
    */
    int minimoAceitavel = 0.00001;
    return (fabs(number) < minimoAceitavel) ? 1 : 0;
}

int isPositivaDefinida(int ordem, float matriz[SIZE][SIZE])
{
    for(int c = 1; c < (ordem + 1); c++){
        if(calcularDeterminante(ordem, matriz) == 0){
            return 0;
        }
    }
    return 1;
}