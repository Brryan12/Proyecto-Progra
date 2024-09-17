#include "Dueno.h"
//Cambie el nombre a dueno por que estaba dando problemas con la ene

Dueno::Dueno(string nombre, string cedula)
{
	this->nombre = nombre;
	this->cedula = cedula;

}

Dueno::~Dueno()
{

}

string Dueno::getNombre()
{
	return nombre;
}

string Dueno::getCedula()
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
	s << "Dueño: " << nombre << " - Cedula: " << cedula << endl;
	return s.str();
}

