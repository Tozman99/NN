# Simple makefile for compiling a program from
# two C source files.  

run: main.o matrix.o dynamic_array.o
		cc -O -o main main.o matrix.o dynamic_array.o
		open ./main
main.o: main.c
		echo "Main compiled"
		cc -O -c main.c
matrix.o: matrix.c 
		echo "Matrix compiled"
		cc -O -c matrix.c 
dynamic_array.o: dynamic_array.c
		echo "dynamic array compiled"
		cc -O -c dynamic_array.c
clean:
		rm ./main main.o matrix.o dynamic_array.o
