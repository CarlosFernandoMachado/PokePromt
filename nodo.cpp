#include "nodo.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

nodo(string camino,int valor)path(camino),key(valor){}

string getpath(){
	return path;
}

int getkey(){
	return key;
}

nodo gethijoizq(){
	return *hijoizq;
}

nodo gethijoder(){
	return *hijoder;
}
