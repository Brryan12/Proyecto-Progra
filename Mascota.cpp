#include "Mascota.h"

Mascota::Mascota(string nombre, string especie)
{
	this->nombre = nombre;
	this->especie = especie;
	this->dueno = nullptr;
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


Dueno* Mascota::getDueno()
{
	return dueno;
}

void Mascota::setDueno(Dueno* nuevoDueno)
{
	this->dueno = dueno;
}

bool Mascota::tieneDueno()
{
	return dueno!=nullptr;
}


string Mascota::toString()
{
	stringstream s;
	s << "Nombre: " << nombre << " - Especie: " << especie << endl;
	if (dueno) {
		s << dueno->toString();
	}
	return s.str();
}


