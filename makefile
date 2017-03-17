main: nodo.o main.o arbolB.o pagina.o
	g++ nodo.o main.o arbolB.o pagina.o -o proyecto
	
nodo.o:	nodo.cpp nodo.h pagina.h
	g++ -c nodo.cpp 

arbolB.o: arbolB.cpp arbolB.h pagina.h
	g++ -c arbolB.cpp

pagina.o: pagina.cpp pagina.h nodo.h arbolB.h
	g++ -c pagina.cpp

main.o:	main.cpp nodo.h arbolb.h pagina.h
	g++ -c main.cpp 

