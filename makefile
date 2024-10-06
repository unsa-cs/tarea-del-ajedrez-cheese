all: main.o chess.o
	g++ main.o chess.o -o test1 $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: chess.h main.c
	g++ -c -g main.c
