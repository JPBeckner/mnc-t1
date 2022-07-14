#include <stdio.h>

#include "sistema_triangular_superior.h"

#include "../../estruturas/matriz/matriz.h"
#include "../../estruturas/vetor/vetor.h"
#include "../../geral/geral.h"


int isTriangularSuperior(int ordem, float matriz[SIZE][SIZE])
{
    /*
    utilzado int para evitar importar o pacote bool.
    verifica se nenhum elemento da matriz
    abaixo da diagonal principal é 0.
    */
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            if(j < i && isZero(matriz[i][j]) == 0){
                return 0;
            }
            else if(j == i && isZero(matriz[i][j]) == 1){
                return 0;
            }
        }
    }
    
    return 1;  // verdadeiro
}

void calcularSistemaTriangularSuperior(int ordem, float matriz[SIZE][SIZE], float vetorTermos[SIZE], float vetorS[SIZE])
{
    for (int i = 0; i != ordem; i++){
        vetorS[i] = vetorTermos[i];
        for (int j = 0; j != i; j++){
            vetorS[i] -= matriz[i][j] * vetorS[j];
        }
        vetorS[i] /= matriz[i][i];
    }    
}

void SistemaTriangularSuperior()
{
    printf("\n***Rotina Sistema Triangular Superior***\n");

    int ordem;
    float vetorTermos[SIZE], vetorS[SIZE];
    float matriz[SIZE][SIZE];

    printf("insira a ordem da matriz: ");
    scanf("%d", &ordem);
    
    printf("Informe os valores da matriz: \n");
    ler_matriz(ordem, ordem, matriz);

    if(isTriangularSuperior(ordem, matriz) != 1){
        printf("Matriz: nao triangular superior\n");
        return;
    }

    printf("insira os valores do vetor termos independentes:\n");
    ler_vetor(ordem, vetorTermos);
    
    calcularSistemaTriangularSuperior(ordem, matriz, vetorTermos, vetorS);
    printf("Vetor solucao da matriz:eh: \n");
    print_vetor(ordem, vetorS);
}