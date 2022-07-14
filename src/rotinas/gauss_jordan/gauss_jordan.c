#include "gauss_jordan.h"   
#include "../../estruturas/matriz/matriz.h"
#include "../../estruturas/vetor/vetor.h"
#include <stdio.h>


void imprimir(int linha, int coluna, float * );
void pivo_f(int linha, int coluna, float *, float*, float*, int j);
void GaussJordan();
// int linha, int colunas, float *

// int main() {
//     int ordem = 0, colunas = 0;
	
// 	printf("Entrar com a ORDEM da Matriz A: ");
// 	scanf("%i", &ordem);

//     int linha = ordem;

// 	colunas = ordem + 1;

//     float vetorRes[linha];
//     for(int i = 0; i < linha; i++) {
//         printf("\nEntrar com valores dos termos independentes: ");
//         scanf("%f", &vetorRes[i]);
//     }

//     gaussJordan(linha, colunas, vetorRes);

//     return 0;
// }
void addVetorResNaMatriz(int linha, int coluna, float matriz[SIZE][SIZE], float vetor[SIZE]){
    for (int i = 0; i < linha; i++){
        matriz[i][coluna] = vetor[i];
    }
}

void GaussJordan() {
    // int linha, int colunas, float *vetorRes
    int ordem = 0;
	
	printf("Entrar com a ORDEM da Matriz A: ");
	scanf("%i", &ordem);

    int linha = ordem;
	int coluna = ordem + 1;

    float vetorRes[linha];
    printf("\nEntrar com valores dos termos independentes: ");
    ler_vetor(linha, vetorRes);
    // for(int i = 0; i < linha; i++) {
    //     scanf("%f", &vetorRes[i]);
    // }

	float MatrizA[linha][coluna];
	printf("\nEntrar com valores na Matriz A: ");
	ler_matriz(linha, ordem, MatrizA);
    addVetorResNaMatriz(linha, coluna, MatrizA, vetorRes);
	// for(int j=0; j < colunas; j++)
	// {
	// 	for(int i = 0; i < linha; i++)
	// 	{
    //         if (colunas - 1 == j)
	// 		{
	// 			MatrizA[i][j] = vetorRes[i];
	// 		}
	// 		printf("\nValores de a(%i,%i): ", i+1, j+1);
	// 		scanf("%f", &MatrizA[i][j]);
	// 	}
	// }

    /*
        printf("Matriz Inicial\n");
        imprimir(linha, colunas, &MatrizA[0][0]);
        printf("\n");
    */

	float pivoAux = 0;
	float vetorPivo[coluna];
	float vetorPivoAux[coluna];
	float n = 0;
    
    for(int j =0; j<coluna-1;j++) {
    
        pivo_f(linha, coluna,&MatrizA[0][0], &vetorPivo[0], &vetorPivoAux[0], j);
        
        for(int i = 0; i<linha; i++) {
            printf("\n(%d,%d)\n", i+1, j+1);

            if (i != j && j < coluna-1) {
                n = MatrizA[i][j];
            }

            for(int k = 0; k < coluna; k++) {
                MatrizA[i][k] = (-1*n*vetorPivo[k]) + MatrizA[i][k];
            }
                
            if(i == j) {
                for(int l = 0; l < coluna; l++) {
                    MatrizA[i][l] = vetorPivoAux[l];
                    if(MatrizA[i][l] == -0) {
                        MatrizA[i][l] = 0;
                    }
                }		
            }
            imprimir(linha,coluna,&MatrizA[0][0]);			
        }

        n = 0;
        for(int k = 0; k < coluna; k++) {
            vetorPivo[k] = 0;
        }
    }
}

void imprimir(int linha, int coluna, float * MatrizA)
{
	printf("\n\n");
	int contar = 0;

	for(int i = 0; i<linha*coluna; i++)
	{
		if(contar < coluna)
		{
			printf(" %f ", MatrizA[i]);
			contar++;
		}
		else
		{
			contar = 0;
			printf("\n");
			printf(" %f ", MatrizA[i]);
			contar++;
		}
	}
}

void pivo_f(int linha, int coluna, float *MatrizA, float *vetorPivo, float *vetorPivoAux, int j)
{
	float pivoAux = 0;
	float matrizTemp[linha][coluna];
	int count = 0;
	
	for (int  i =  0; i < linha; i++)
	{
		for( int k = 0; k < coluna; k++)
		{
			matrizTemp[i][k] = MatrizA[count];
			count ++;
		}
	}
	
		for(int i = 0; i<linha;i++)
		{
			if(i == j )
			{
					pivoAux = matrizTemp[i][j];
					printf("pivo: %f\n", pivoAux);

					for(int l = 0; l < coluna; l++)
					{
						matrizTemp[i][l] = matrizTemp[i][l] / pivoAux;
						vetorPivo[l] = matrizTemp[i][l];
						vetorPivoAux[l] = matrizTemp[i][l];
					}		
			}
		}

	count = 0;
	
	for (int  i =  0; i < linha; i++)
	{
		for( int k = 0; k < coluna; k++)
		{
			MatrizA[count] = matrizTemp[i][k];
			count++;
		}
	}
}