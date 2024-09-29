#include "Mascota.h"

Mascota::Mascota( string nombre, string especie, Dueno* dueno)
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

string Mascota::toString() const
{
	stringstream s;
	s << "Nombre: " << nombre << "\n";
	s << "Especie: " << especie << "\n";
	s << "Dueño: " << dueno->getNombre() << "\n";
	return s.str();
}


