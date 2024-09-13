#include "Doctor.h"

Doctor::Doctor(string nombre, string cedula, Especialidad* especialidad, ContenedoraCitas* agenda)
{
	this->nombre = nombre;
	this->cedula = cedula;
	this->especialidad = especialidad;
	this->agenda = new ContenedoraCitas(66);
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

