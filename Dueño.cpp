#include "Dueño.h"


Dueño::Dueño(string nombre, string cedula, int cantidadMascotas)
{
	this->nombre = nombre;
	this->cedula = cedula;
	this->cantidadMascotas = cantidadMascotas;
	this->mascotas = new ContenedoraMascotas(cantidadMascotas);
	this->agenda = new ContenedoraCitas(66);
}

Dueño::~Dueño()
{
	delete mascotas;
	delete agenda;
}

string Dueño::getNombre()
{
	return nombre;
}

string Dueño::getCedula()
{
	return cedula;
}

void Dueño::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Dueño::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Dueño::agregarMascota(Mascota* mascota)
{
	this->mascotas->agregarMascota(mascota);

}


string Dueño::toString()
{
	stringstream s;
	s << "Dueño: " << nombre << " - Cedula: " << cedula << endl;
	s << "Mascotas: " << endl;
	mascotas->toString();
	return s.str();
}

