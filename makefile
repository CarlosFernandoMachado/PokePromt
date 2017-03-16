main: nodo.o main.o 
	g++ nodo.o main.o -o proyecto
	
nodo.o:	nodo.cpp nodo.h
	g++ -c nodo.cpp 

main.o:	main.cpp nodo.h
	g++ -c main.cpp 

