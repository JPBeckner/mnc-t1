compilar-linux:
	gcc -c src/main.c -o bin/linux/mnc.o

	gcc -c src/rotinas/ajuda/ajuda.c -o bin/linux/ajuda.o
	gcc -c src/rotinas/cholesky/cholesky.c -o bin/linux/cholesky.o
	gcc -c src/rotinas/decomposicao_lu/decomposicao_lu.c -o bin/linux/decomposicao_lu.o
	gcc -c src/rotinas/determinante/determinante.c -o bin/linux/determinante.o
	gcc -c src/rotinas/gauss_compacto/gauss_compacto.c -o bin/linux/gauss_compacto.o
	gcc -c src/rotinas/gauss_jordan/gauss_jordan.c -o bin/linux/gauss_jordan.o
	gcc -c src/rotinas/gauss_siedel/gauss_siedel.c -o bin/linux/gauss_siedel.o
	gcc -c src/rotinas/jacobi/jacobi.c -o bin/linux/jacobi.o
	gcc -c src/rotinas/matriz_inversa/matriz_inversa.c -o bin/linux/matriz_inversa.o
	gcc -c src/rotinas/sistema_triangular_inferior/sistema_triangular_inferior.c -o bin/linux/sistema_triangular_inferior.o
	gcc -c src/rotinas/sistema_triangular_superior/sistema_triangular_superior.c -o bin/linux/sistema_triangular_superior.o

	gcc bin/linux/mnc.o bin/linux/ajuda.o bin/linux/cholesky.o bin/linux/decomposicao_lu.o bin/linux/determinante.o bin/linux/gauss_compacto.o bin/linux/gauss_jordan.o bin/linux/gauss_siedel.o bin/linux/jacobi.o bin/linux/matriz_inversa.o bin/linux/sistema_triangular_inferior.o bin/linux/sistema_triangular_superior.o -o bin/linux/mnc

compilar-windows:
	gcc -c src/main.c -o bin/windows/mnc.o
	gcc bin/windows/mnc.o -o bin/windows/mnc

run-linux:
	./bin/linux/mnc

run-windows:
	./bin/windows/mnc