#pragma once
#include <iostream>
#include <sstream>
#include "Dueno.h"
using namespace std;
class Mascota
{
private:
	string nombre;
	string especie;
	Dueno* dueno;
	
public:
	Mascota(string nombre, string especie);
	~Mascota();
	string getNombre();
	string getEspecie();
	void setNombre(string nombre);
	void setEspecie(string especie);
	Dueno* getDueno() const;
	void setDueno();
	bool tieneDueno() const;
	string toString();
};

