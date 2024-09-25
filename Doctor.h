#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>
using namespace std;
class Especialidad;
class Doctor
{
private:
	string nombre;
	string cedula;
	Especialidad* especialidad;

public:
	Doctor(string nombre, string cedula, Especialidad* especialidad);
	~Doctor();
	string getNombre();
	string getCedula();
	Especialidad* getEspecialidad();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void setEspecialidad(Especialidad* especialidad);
	string toString();
};

