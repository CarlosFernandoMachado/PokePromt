#pragma once

class pagina{
	nodo padreizq;
	nodo padreder;
	pagina padre;
	nodo arreglo[3];
public:
	pagina(nodo);
	void agregar(nodo,bool);
	nodo get0();
	nodo get1();
	void eliminar(int);
	pagina getpadre();
	void setpadre(pagina);
	string tostring();
};
