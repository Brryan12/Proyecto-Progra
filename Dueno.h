#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//NO TOCAR DUENO
class Dueno
{
private:
	string nombre;
	string cedula;

public:
	Dueno(string nombre, string cedula);
	~Dueno();
	string getNombre();
	string getCedula();
	void setNombre(string nombre);
	void setCedula(string cedula);
	string toString();
};

