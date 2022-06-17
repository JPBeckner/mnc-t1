compilar-linux:
	gcc -c src/main.c -o bin/linux/mnc.o
	gcc -c src/rotinas/ajuda/ajuda.c -o bin/linux/ajuda.o
	gcc bin/linux/mnc.o bin/linux/ajuda.o -o bin/linux/mnc

compilar-windows:
	gcc -c src/main.c -o bin/windows/mnc.o
	gcc bin/windows/mnc.o -o bin/windows/mnc

run-linux:
	./bin/linux/mnc

run-windows:
	./bin/windows/mnc