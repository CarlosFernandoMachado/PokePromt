#pragma once
#include <string>
using std::string;

class nodo{
	string path;
	int key;
	nodo *hijoizq;
	nodo *hijoder;
public:
	nodo(string,int);
	string getpath();
	int getkey();
	nodo gethijoizq();
	nodo gethijoder();

};
