#include "Especialidad.h"

Especialidad::Especialidad(string nombre, string descripcion):
	nombre(nombre), descripcion(descripcion)
{}

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

string Especialidad::toString()
{
	stringstream s;
	s << "Especialidad: " << nombre << endl << "Descripcion: " << descripcion << endl;
	
	return s.str();
}