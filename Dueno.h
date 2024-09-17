#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "ContenedoraMascotas.h"
#include "Mascota.h"
#include "ContenedoraCitas.h"
using namespace std;

class Dueno
{
private:
	string nombre;
	string cedula;
	ContenedoraMascotas* mascotas;
	int cantidadMascotas;
	ContenedoraCitas* agenda;
public:
	Dueno(string nombre, string cedula, int cantidadMascotas);
	~Dueno();
	string getNombre();
	string getCedula();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void agregarMascota(Mascota* mascota);
	string toString();
};

