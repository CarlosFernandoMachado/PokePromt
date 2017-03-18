#pragma once
#include <string>
#include "nodo.h"

using std::string;

class pagina{
	pagina* padre;
	pagina* hijoizq;
	pagina* hijoder;
	nodo arreglo[3];
public:
	pagina(nodo,nodo*);
	nodo get0();
	nodo get1();
	pagina getpadre();
	void setpadre(pagina*);
	pagina gethijoizq();
	pagina gethijoder();
	void sethijoizq(pagina*);
	void sethijoder(pagina*);
	void agregar(pagina*,bool);
	void eliminar(int);
	string tostring();
	
};
