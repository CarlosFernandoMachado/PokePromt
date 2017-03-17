#include "pagina.h"
#include "nodo.cpp"
#include "arbolB.cpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

pagina::pagina(nodo primero){
	arreglo[0] = primero;
	arreglo[1] = null;
	arreglo[2] = null;
}
void pagina::agregar(pagina nuevovalor, bool validacion, arbolB& arbol){
	nodo nuevo = nuevovalor.get0();
	if(nuevo.getkey() < arreglo[0].getkey() && arreglo[0].getizq() != null && validacion == true){
		arreglo[0].getizq().agregar(nuevovalor,true,arbol);
	}else if(nuevo.getkey() > arreglo[0].getkey() && arreglo[0].getder() != null && validacion == true && arreglo[1] == null){
		arreglo[0].getder().agregar(nuevovalor,true,arbol);
	}else if(nuevo.getkey() > arreglo[1].getkey() && arreglo[1].getder() != null && validacion == true){
		arreglo.getder().agregar(nuevovalor,true,arbol);
	}else if(nuevo.getkey() > arreglo[0].getkey() && nuevo.getkey() < arreglo[1].getkey() && validacion == true){
		arreglo[0].getder().agregar(nuevovalor,true,arbol);
	}else if(nuevo.getkey() < arreglo[0].getkey() && arreglo[1] == null){
		arreglo[1] = arreglo[0];
		arreglo[0] = nuevo;
		if(arreglo[0].getder() != null){
			arreglo[1].setizq(arreglo[0].getder());
		}
	}else if(nuevo.getkey() > arreglo[0].getkey() && arreglo[1] == null){
		arreglo[1] = nuevo;
		if(arreglo[1].getizq() != null){
			arreglo[0].setder(arreglo[1].getizq());
		}
	}else{
		nodo menor = arreglo[0],mayor = arreglo[1];
		if(nuevo.getkey() < menor.getkey()){
			arreglo[2] = mayor;
			arreglo[1] = menor;
			arreglo[0] = nuevo;
			if(arreglo[0].getder() != null){
				arreglo[1].setizq(arreglo[0].getder());
			}
		}else if(nuevo.getkey() > mayor){
			arreglo[2] = nuevo;
			if(arreglo[2].getizq() != null){
				arreglo[1].setder(arreglo[2].getizq());
			}
		}else if(nuevo.getkey() > menor.getkey() && nuevo.getkey() < mayor.getkey()){
			arreglo[2] = mayor;
			arreglo[1] = nuevo;
			if(arreglo[1].getder() != null){
				arreglo[2].setizq(arreglo[1].getder());
			}
			if(arreglo[1].getizq() != null){
				arreglo[0].setder(arreglo[1].getizq());
			}
		}
		pagina a(arreglo[0]);
		pagina b(arreglo[2]);
		arreglo[1].setizq(&a);
		arreglo[1].setder(&b);
		pagina newpagina(arreglo[1]);
		a.setpadre(newpagina);
		b.setpadre(newpagina);
		if(padre != null){
			padre.agregar(newpagina,false,arbol);
		}else{
			arbol.setroot(newpagina);
		}
	}
}
nodo pagina::get0(){
	return arreglo[0];
}

nodo pagina::get1(){
	return arreglo[1];
}

nodo getpadreizq(){
	return padreizq;
}
nodo getpadreder(){
	return padreder;
}

void pagina::eliminar(int key){

}

pagina pagina::getpadre(){
	return padre;
}

void pagina::setpadre(pagina newdad){
	padre = newdad;
	padreizq = newdad.getpadreizq();
	if(newdad.get1() != null){
		padreder = newdad.get1();
	}
}

string tostring(){
	string nodos = "";
	return nodos;
}
