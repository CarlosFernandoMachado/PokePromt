#include "arbolb.h"
#include <string>

using std::string;


arbolb::arbolb(pagina raiz):root(raiz){
}
pagina arbolb::getroot(){
	return root;
}
void arbolb::setroot(pagina newroot){
	root = newroot;
}
string arbolb::tostring(){
	string imprimir = "";
	return imprimir;
}
