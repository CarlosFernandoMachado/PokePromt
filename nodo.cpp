#include "nodo.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

nodo::nodo(string camino,int valor){
	path = camino;
	key = valor;
}
nodo::nodo(){
	key = -1;
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
string nodo::tostring(){
	stringstream ss;
	if (key != -1){
		ss << "Key: " << key << " \n";
	}else{
		ss << "null \n";
	}
	return ss.str();
}
