#include "pagina.h"
#include "nodo.h"
#include <string>

using std::string;

pagina::pagina(nodo nuevo, nodo* null){
	arreglo[0] = nuevo;
	arreglo[1] = *null;
	arreglo[2] = *null;	
	padre = NULL;
	hijoizq = NULL;
	hijoder= NULL;
}
nodo pagina::get0(){
	return arreglo[0];
}
nodo pagina::get1(){
	return arreglo[1];
}
pagina pagina::getpadre(){
	return *padre;
}
void pagina::setpadre(pagina* newpadre){
	padre = newpadre;
}
pagina pagina::gethijoizq(){
	return *hijoizq;
}
pagina pagina::gethijoder(){
	return *hijoder;
}
void pagina::sethijoizq(pagina* nuevohijo){
	hijoizq = nuevohijo;
}
void pagina::sethijoder(pagina* nuevohijo){
	hijoder = nuevohijo;
}
void pagina::agregar(pagina* nuevovalor ,bool validacion){
	
}
void pagina::eliminar(int key){

}
string pagina::tostring(){
	string temp = "";
	for(int i = 0; i < 2; i++){
		temp += arreglo[i].tostring();
	}
	return temp;
}
