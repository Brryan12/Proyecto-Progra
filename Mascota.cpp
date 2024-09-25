#include "Mascota.h"

Mascota::Mascota(std::string nombre, string especie, Dueno* dueno)
	: nombre(nombre), especie(especie), dueno(dueno) {}

Mascota::~Mascota()
{
}

string Mascota::getNombre() const
{
	return nombre;
}

string Mascota::getEspecie() const
{
	return especie;
}

Dueno* Mascota::getDueno() const
{
	return dueno;
}

void Mascota::setDueno(Dueno* nuevoDueno)
{
	dueno = nuevoDueno;
}

void Mascota::setNombre(string nuevoNombre)
{
	nombre = nuevoNombre;

}

void Mascota::setEspecie(string nuevaEspecie)
{
	especie = nuevaEspecie;
}



