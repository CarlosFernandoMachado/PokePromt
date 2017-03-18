#include "nodo.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

nodo::nodo(string camino,int valor){
	path = camino;
	key = valor;
	padreizq = NULL;
	padreder = NULL;
}
nodo::nodo(){

}
string nodo::getpath(){
	return path;
}
int nodo::getkey(){
	return key;
}
void nodo::setkey(int valor){
	key = valor;
}
nodo nodo::getpadreizq(){
	return *padreizq;
}
void nodo::setpadreizq(nodo* newpadre){
	padreizq = newpadre;
}
nodo nodo::getpadreder(){
	return *padreder;
}
void nodo::setpadreder(nodo* newpadre){
	padreder = newpadre;
}
string nodo::tostring(){
	stringstream ss;
	if(key != -1){
		ss << "Key: " << key;
		if(padreder != NULL){
			ss  << " Padre derecho: " << padreder->getkey();
		}else{
			ss << " Padre derecho: -1";
		}
		if(padreizq != NULL){
			ss << " padre izquierdo: " << padreizq->getkey() << "\n";
		}else{
			ss << " Padre izquierdo: -1 \n";
		}
	}else{
		ss << "null" << "\n";
	}
	return ss.str();
}
