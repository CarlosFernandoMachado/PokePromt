#include <iostream>
#include "nodo.h"
#include "pagina.h"
#include "arbolb.h"
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char*argv[]){
	nodo null("",-1);
	cout << null.tostring();
	//pagina Null(null,&null);
	nodo primero("",1);
	cout << primero.tostring();
	pagina root(primero,&null);
	cout << root.tostring();
	return 0;
}

