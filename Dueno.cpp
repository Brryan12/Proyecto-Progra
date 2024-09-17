#include "Dueno.h"
//Cambie el nombre a dueno por que estaba dando problemas con la ene

Dueno::Dueno(string nombre, string cedula, int cantidadMascotas)
{
	this->nombre = nombre;
	this->cedula = cedula;
	this->cantidadMascotas = cantidadMascotas;
	this->mascotas = new ContenedoraMascotas(cantidadMascotas);
	this->agenda = new ContenedoraCitas(66);
}

Dueno::~Dueno()
{
	delete mascotas;
	delete agenda;
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

void Dueno::agregarMascota(Mascota* mascota)
{
	this->mascotas->agregarMascota(mascota);

}


string Dueno::toString()
{
	stringstream s;
	s << "Dueño: " << nombre << " - Cedula: " << cedula << endl;
	s << "Mascotas: " << endl;
	mascotas->toString();
	return s.str();
}

