#pragma once
#include <string>
using std::string;

class arbolB{
	pagina root;
public:
	arbolB(pagina);
	void setroot(pagina);
	pagina getroot();
	string imprimir();
};
