#pragma once
#include "Especialidad.h"
class Doctor
{
private:
	string nombre;
	string cedula;
	Especialidad* especialidad;

public:
	Doctor();
	Doctor(string nombre, string cedula, Especialidad* especialidad);
	~Doctor();
	string getNombre();
	string getCedula();
	Especialidad* getEspecialidad();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void setEspecialidad(Especialidad* especialidad);
};

