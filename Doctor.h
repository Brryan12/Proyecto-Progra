#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>

class Especialidad;
class Doctor
{
private:
	string nombre;
	string cedula;
	Especialidad* especialidad;
	//Agenda* agenda;

public:
	Doctor(string nombre, string cedula, Especialidad* especialidad);
	~Doctor();
	string getNombre();
	string getCedula();
	Especialidad* getEspecialidad();
	/*Agenda* getAgenda();*/
	void setNombre(string nombre);
	void setCedula(string cedula);
	void setEspecialidad(Especialidad* especialidad);
	string toString();
};

