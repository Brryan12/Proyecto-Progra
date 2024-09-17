#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "ContenedoraMascotas.h"
#include "Mascota.h"
#include "ContenedoraCitas.h"
using namespace std;

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

