#include "pagina.cpp"
#include "nodos.cpp"
#include "arbolB.h"
#include <string>
using std::string;

arbolB::arbolB(pagina newroot):root(newroot){

}
void arbolB::setroot(pagina newroot){
	root = newroot;
}
pagina arbolB::getroot(){
	return root;
}

string arbolB::imprimir(){
	string nodos = "";
	return nodos;
}
