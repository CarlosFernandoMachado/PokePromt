main: main.o nodo.o
	g++ main.o nodo.o -o proyecto
	
main.o:	main.cpp nodo.h
	g++ -c main.cpp 

nodo.o:	nodo.cpp nodo.h
	g++ -c nodo.cpp 
