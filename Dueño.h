#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "ContenedoraMascotas.h"
#include "Mascota.h"
using namespace std;

class Dueño
{
private:
	string nombre;
	string cedula;
	ContenedoraMascotas* mascotas;
	int cantidadMascotas;
public:
	Dueño(string nombre, string cedula, int cantidadMascotas);
	~Dueño();
	string getNombre();
	string getCedula();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void agregarMascota(Mascota* mascota);
	string toString();
};

