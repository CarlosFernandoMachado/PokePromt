#pragma once
#include <string>
#include "pagina.h"
using std::string;
class nodo{
	string path;
	int key;
	pagina* izq;
	pagina* der;
public:
	nodo(string,int);
	string getpath();
	int getkey();
	pagina& getizq();
	pagina& getder();
	void setizq(pagina);
	void setder(pagina);

};
