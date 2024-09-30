#include "Dueno.h"

Dueno::Dueno(string nombre, string cedula) : nombre(nombre), cedula(cedula) {}

Dueno::~Dueno()
{
}

string Dueno::getNombre() const
{
	return nombre;
}

string Dueno::getCedula() const
{
	return cedula;
}

void Dueno::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Dueno::setCedula(string cedula)
{
	this->cedula = cedula;
}

string Dueno::toString()
{
	stringstream s;
	s << "dueno: " << nombre << " - Cedula: " << cedula;
	return s.str();
}