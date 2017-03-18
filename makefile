main: main.o nodo.o pagina.o arbolb.o
	g++ main.cpp nodo.cpp pagina.cpp arbolb.cpp -o a
main.o: main.cpp nodo.h pagina.h arbolb.h
	g++ -c main.cpp
nodo.o: nodo.cpp nodo.h
	g++ -c nodo.cpp
pagina.o: pagina.cpp pagina.h nodo.h
	g++ -c pagina.cpp
arbolb.o: arbolb.cpp arbolb.h pagina.h
	g++ -c arbolb.cpp
