#pragma once
#include "nodo.h"
#include "arbolB.h"
class pagina{
	nodo padreizq;
	nodo padreder;
	pagina padre;
	nodo arreglo[3];
public:
	pagina(nodo);
	void agregar(nodo,bool,arbol&);
	nodo get0();
	nodo get1();
	nodo getpadreizq();
	nodo getpadreder();
	void eliminar(int);
	pagina getpadre();
	void setpadre(pagina);
	string tostring();
};
