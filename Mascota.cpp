#include "Mascota.h"

Mascota::Mascota(string nombre, string especie, Dueño* dueño)
{
	this->nombre = nombre;
	this->especie = especie;
	this->dueño = dueño;
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

Dueño* Mascota::getDueño()
{
	return dueño;
}

void Mascota::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Mascota::setEspecie(string especie)
{
	this->especie = especie;
}

void Mascota::setDueño(Dueño* dueño)
{
	this->dueño = dueño;
}


