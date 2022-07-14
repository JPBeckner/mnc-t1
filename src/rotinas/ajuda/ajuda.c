#include "ajuda.h"   
#include <stdio.h>

void ajuda()
{
    // printf("funcao de ajuda");
    printf("\nCLI MNC T1 - "
            "ferramenta de linha de comando que executa "
            "as rotinas implementadas de acordo com o solicitado"
            "pelo trabalho.\n"
            "\nComo usar:"
            "\n\tmnc <rotina> [argumentos, ...]\n"
            "\nRotinas:"
            "\n\t*  ajuda: apresenta os comandos disponíveis.\n"
            "\t-"
            "\n\t*  rd   - Rotina Determinante"
            "\n\t*  rsti - Rotina Sistema Triangular Inferior"
            "\n\t*  rsts - Rotina Sistema Triangular Superior"
            "\n\t*  rdlu - Rotina Decomposicao LU"
            "\n\t*  rc   - Rotina Cholesky"
            "\n\t*  rgc  - Rotina Gauss Compacto"
            "\n\t*  rgj  - Rotina Gauss Jordan"
            "\n\t*  rj   - Rotina Jacobi"
            "\n\t*  rgs  - Rotina Gauss Siedel"
            "\n\t*  rmi  - Rotina Matriz Inversa"
            "\n\nExemplo:"
            "\n\tmnc rd 1 1\n");
}
