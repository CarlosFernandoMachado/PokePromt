#pragma once
#include <string>

using std::string;

class nodo{
	string path;
	int key;
	nodo* padreizq;
	nodo* padreder;
public:
	nodo(string,int);
	nodo();
	string getpath();
	int getkey();
	void setkey(int);
	nodo getpadreizq();
	void setpadreizq(nodo*);
	nodo getpadreder();
	void setpadreder(nodo*);
	string tostring();
};
