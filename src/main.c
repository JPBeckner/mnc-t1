/*
 * Métodos Numéricos Computacionais
 * Trabalho 1: Resolução de Sistemas Lineares e Cálculo de Matriz Inversa
 *
 * Christian Rodrigues Batista - 191020941
 * João Pedro Beckner - 191025607
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// rotinas
#include "rotinas/ajuda/ajuda.h"

int main(int argc, char *argv[])
{
    char comando[100];
    sprintf(comando, "%s", argv[1]);
    // printf("%s", argv[1]);

    if (strcmp(comando, "") == 0)
    {
        ajuda();
        // printf("%s", comando);
        // printf("teste'");
        return 0;
    }
    if (strcmp(comando, "ajuda") == 0)
    {
        printf("Apresentando comandos:\n");
        ajuda();
        // printf("%s\n", comando);
        // printf("teste\n'");
        return 0;
    }
    if (strcmp(comando, "rd") == 0)
    {
        // Determinante();
        return 0;
    }
    if (strcmp(comando, "rsti") == 0)
    {
        // SistemaTriangularInferior();
        return 0;
    }
    if (strcmp(comando, "rsts") == 0)
    {
        // SistemaTriangularSuperior();
        return 0;
    }
    if (strcmp(comando, "rdlu") == 0)
    {
        // DecomposicaoLU();
        return 0;
    }
    if (strcmp(comando, "rc") == 0)
    {
        // Cholesky();
        return 0;
    }
    if (strcmp(comando, "rgc") == 0)
    {
        // GaussCompacto();
        return 0;
    }
    if (strcmp(comando, "rgj") == 0)
    {
        // GaussJordan();
        return 0;
    }
    if (strcmp(comando, "rj") == 0)
    {
        // Jacobi();
        return 0;
    }
    if (strcmp(comando, "rgs") == 0)
    {
        // GaussSiedel();
        return 0;
    }
    if (strcmp(comando, "rmi") == 0)
    {
        // MatrizInversa();
        return 0;
    }

    return 0;
}
