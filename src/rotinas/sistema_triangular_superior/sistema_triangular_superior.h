#ifndef SISTEMA_TRIANGULAR_SUPERIOR_DOT_H
#define SISTEMA_TRIANGULAR_SUPERIOR_DOT_H

#define SIZE 100

int isTriangularSuperior(int ordem, float matriz[SIZE][SIZE]);

void calcularSistemaTriangularSuperior(int ordem, float matriz[SIZE][SIZE], float vetorTermos[SIZE], float vetorS[SIZE]);

void SistemaTriangularSuperior();

#endif