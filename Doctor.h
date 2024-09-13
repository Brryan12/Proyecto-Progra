#pragma once
#include "Especialidad.h"
#include "ContenedoraCitas.h"
class Doctor
{
private:
	string nombre;
	string cedula;
	Especialidad* especialidad;
	ContenedoraCitas* agenda;

public:
	Doctor(string nombre, string cedula, Especialidad* especialidad, ContenedoraCitas* agenda);
	~Doctor();
	string getNombre();
	string getCedula();
	Especialidad* getEspecialidad();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void setEspecialidad(Especialidad* especialidad);
};

