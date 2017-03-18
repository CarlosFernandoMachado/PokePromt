#include <iostream>
#include "nodo.h"
#include "pagina.h"
#include "arbolb.h"
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char*argv[]){
	pagina root(nodo("",60));
	pagina page1(nodo("",55));
	pagina page2(nodo("",50));
	arbolb arbol(root);
	arbol.agregar(page1,true);
	cout << arbol.tostring();
	cout << "--------------------------------------------------------------------------------" << endl;
	arbol.agregar(page2,true);
	cout << arbol.tostring();
	cout << "--------------------------------------------------------------------------------" << endl;
	arbol.agregar(pagina(nodo("",54)),true);
	cout << arbol.tostring();
	cout << "--------------------------------------------------------------------------------" << endl;
	arbol.agregar(pagina(nodo("",65)),true);
	cout << arbol.tostring();
	cout << "--------------------------------------------------------------------------------" << endl;
	arbol.agregar(pagina(nodo("",70)),true);
	cout << arbol.tostring();
	cout << "--------------------------------------------------------------------------------" << endl;
	arbol.agregar(pagina(nodo("",80)),true);
	cout << arbol.tostring();

	return 0;
}

