#include <iostream>
#include "nodo.h"
#include "pagina.h"
#include "arbolb.h"
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char*argv[]){
	nodo a("",1);
	nodo b("",2);
	pagina page2(b);
	pagina page(a);
	page.agregar(page2,true);
	cout << page.tostring();
	return 0;
}

