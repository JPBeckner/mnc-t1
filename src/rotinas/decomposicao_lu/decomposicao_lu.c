#include <stdio.h>

#include "decomposicao_lu.h"   
#include "../../estruturas/matriz/matriz.h"
#include "../../estruturas/vetor/vetor.h"
#include "../sistema_triangular_inferior/sistema_triangular_inferior.h"
#include "../sistema_triangular_superior/sistema_triangular_superior.h"
#include "../../geral/geral.h"


void decomporLU(int ordem, float matriz[SIZE][SIZE], float matrizL[SIZE][SIZE], float matrizU[SIZE][SIZE] ){
    for(int j = 0; j != ordem; j++){
        for(int i = 0; i != ordem; i++){
            if(i < j){
                matrizL[i][j] = 0;

                matrizU[i][j] = matriz[i][j];
                for(int k = 0; k <= (i - 1); k++){
                    matrizU[i][j] -= (matrizL[i][k] * matrizU[k][j]);
                }
            }
            else if(i == j){
                matrizL[i][j] = 1;

                matrizU[i][j] = matriz[i][j];
                for(int k = 0; k <= (i - 1); k++){
                    matrizU[i][j] -= (matrizL[i][k] * matrizU[k][j]);
                }

            }
            else{
                matrizU[i][j] = 0;

                matrizL[i][j] = matriz[i][j];
                for(int k = 0; k <= (j - 1); k++){
                    matrizL[i][j] -= (matrizL[i][k] * matrizU[k][j]);
                }
                matrizL[i][j] /= matrizU[j][j];
            }
        }   
    }
}

void calcularDecomporLU(int ordem, float matriz[SIZE][SIZE], float vetorTermos[SIZE], float vetorS[SIZE])
{
    float vetor[SIZE];
    float matrizL[SIZE][SIZE], matrizU[SIZE][SIZE];

    // define L e U
    decomporLU(ordem, matriz, matrizL, matrizU);

    // resolve a equacao
    calcularSistemaTriangularInferior(ordem, matriz, vetorTermos, vetor);
    // triangularInferior(l, size, termos, y);
    calcularSistemaTriangularSuperior(ordem, matrizU, vetor, vetorS);
    // triangularSuperior(u, size, y, s);
}

void DecomposicaoLU()
{
    printf("\n***Rotina Sistema Triangular Superior***\n");
    
    int ordem;
    float vetorTermos[SIZE], vetorS[SIZE];
    float matriz[SIZE][SIZE];

    printf("insira a ordem da matriz: ");
    scanf("%d", &ordem);
    
    printf("Informe os valores da matriz: \n");
    ler_matriz(ordem, ordem, matriz);

    if(isPositivaDefinida(ordem, matriz) != 1){
        printf("Matriz: nao e positiva definida:\n  (Para todo Ak, k = {1, 2, ..., n} | det(Ak) != 0)\n");
        return;
    }

    printf("insira os valores do vetor termos independentes:\n");
    ler_vetor(ordem, vetorTermos);

    calcularDecomporLU(ordem, matriz, vetorTermos, vetorS);

    printf("o vetor solucao da matriz eh: \n");
    print_vetor(ordem, vetorS);

}