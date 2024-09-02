#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Especialidad
{
private:
	string nombre;
	string descripcion;
public:
	Especialidad();
	Especialidad(string nombre, string descripcion);
	~Especialidad();
	string getNombre();
	string getDescripcion();
	void setNombre(string nombre);
	void setDescripcion(string descripcion);
	string toString();
};

