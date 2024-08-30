#include "Mascota.h"

Mascota::Mascota(string nombre, string especie)
{
	this->nombre = nombre;
	this->especie = especie;

}

Mascota::~Mascota()
{
}

string Mascota::getNombre()
{
	return nombre;
}

string Mascota::getEspecie()
{
	return especie;
}



void Mascota::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Mascota::setEspecie(string especie)
{
	this->especie = especie;
}

string Mascota::toString()
{
	stringstream s;
	s << "Nombre: " << nombre << " - Especie: " << especie << endl;
	return s.str();
}


