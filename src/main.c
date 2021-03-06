#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// rotinas
#include "rotinas/ajuda/ajuda.h"
#include "rotinas/cholesky/cholesky.h"
#include "rotinas/decomposicao_lu/decomposicao_lu.h"
#include "rotinas/determinante/determinante.h"
#include "rotinas/gauss_compacto/gauss_compacto.h"
#include "rotinas/gauss_jordan/gauss_jordan.h"
#include "rotinas/gauss_siedel/gauss_siedel.h"
#include "rotinas/jacobi/jacobi.h"
#include "rotinas/matriz_inversa/matriz_inversa.h"
#include "rotinas/sistema_triangular_inferior/sistema_triangular_inferior.h"
#include "rotinas/sistema_triangular_superior/sistema_triangular_superior.h"


/*
 * Métodos Numéricos Computacionais
 * Trabalho 1: Resolução de Sistemas Lineares e Cálculo de Matriz Inversa
 *
 * Antonio Pedro Forte - 191024287
 * Christian Rodrigues Batista - 191020941
 * João Pedro Beckner - 191025607
 */

int main(int argc, char *argv[])
{
    char comando[100];
    sprintf(comando, "%s", argv[1]);

    if (strcmp(comando, "ajuda") == 0 || strcmp(comando, "(null)") == 0)
    {
        printf("Apresentando comandos:\n");
        ajuda();
        return 0;
    }
    if (strcmp(comando, "rd") == 0)
    {
        Determinante(atoi(argv[2]));
        return 0;
    }
    if (strcmp(comando, "rsti") == 0)
    {
        SistemaTriangularInferior();
        return 0;
    }
    if (strcmp(comando, "rsts") == 0)
    {
        SistemaTriangularSuperior();
        return 0;
    }
    if (strcmp(comando, "rdlu") == 0)
    {
        DecomposicaoLU();
        return 0;
    }
    if (strcmp(comando, "rc") == 0)
    {
        Cholesky();
        return 0;
    }
    if (strcmp(comando, "rgc") == 0)
    {
        GaussCompacto();
        return 0;
    }
    if (strcmp(comando, "rgj") == 0)
    {
        GaussJordan();
        return 0;
    }
    if (strcmp(comando, "rj") == 0)
    {
        Jacobi();
        return 0;
    }
    if (strcmp(comando, "rgs") == 0)
    {
        GaussSiedel();
        return 0;
    }
    if (strcmp(comando, "rmi") == 0)
    {
        MatrizInversa();
        return 0;
    }

    return 0;
}
