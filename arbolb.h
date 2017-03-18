#pragma once
#include <string>
#include "pagina.h"

using std::string;

class arbolb{
	pagina root;
public:
	arbolb(pagina);
	pagina getroot();
	void setroot(pagina);
	string tostring();


};
