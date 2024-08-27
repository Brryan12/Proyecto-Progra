#include "Especialidad.h"

Especialidad::Especialidad()
{
	this->nombre = "";
	this->descripcion = "";

}

Especialidad::Especialidad(string nombre, string descripcion)
{
	this->nombre = nombre;
	this->descripcion = descripcion;
}

Especialidad::~Especialidad()
{
}


string Especialidad::getNombre()
{
	return nombre;
}

string Especialidad::getDescripcion()
{
	return descripcion;
}


void Especialidad::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Especialidad::setDescripcion(string descripcion)
{
	this->descripcion = descripcion;
}

