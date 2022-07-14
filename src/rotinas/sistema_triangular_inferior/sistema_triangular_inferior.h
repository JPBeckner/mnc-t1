#ifndef SISTEMA_TRIANGULAR_INFERIOR_DOT_H
#define SISTEMA_TRIANGULAR_INFERIOR_DOT_H

#define SIZE 100

int isTriangularInferior(int ordem, float matriz[SIZE][SIZE]);

void calcularSistemaTriangularInferior(int ordem, float matriz[SIZE][SIZE], float vetorTermos[SIZE], float vetorS[SIZE]);

void SistemaTriangularInferior();

#endif