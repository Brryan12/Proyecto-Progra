#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Mascota
{
private:
	string nombre;
	string especie;
	
public:
	Mascota(string nombre, string especie);
	~Mascota();
	string getNombre();
	string getEspecie();

	void setNombre(string nombre);
	void setEspecie(string especie);
	
	string toString();
};

