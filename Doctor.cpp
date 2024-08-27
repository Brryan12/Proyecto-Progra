#include "Doctor.h"

Doctor::Doctor()
{
	this->nombre = "";
	this->cedula = "";
	this->especialidad = nullptr;
}

Doctor::Doctor(string nombre, string cedula, Especialidad* especialidad)
{
	this->nombre = nombre;
	this->cedula = cedula;
	this->especialidad = especialidad;
}

Doctor::~Doctor()
{
}

string Doctor::getNombre()
{
	return nombre;
}

string Doctor::getCedula()
{
	return cedula;
}

Especialidad* Doctor::getEspecialidad()
{
	return especialidad;
}

void Doctor::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Doctor::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Doctor::setEspecialidad(Especialidad* especialidad)
{
	this->especialidad = especialidad;
}

