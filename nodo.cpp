#include "nodo.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

nodo::nodo(string camino,int valor):path(camino),key(valor){}

string nodo::getpath(){
	return path;
}

int nodo::getkey(){
	return key;
}

pagina nodo::getizq(){
	return izq;
}

pagina nodo::getder(){
	return der;
}

void nodo::setizq(pagina nuevo){
	izq = nuevo;
}

void nodo::setder(pagina nuevo){
	der = nuevo;
}
