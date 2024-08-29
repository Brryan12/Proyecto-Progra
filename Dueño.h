#pragma once
#include <iostream>
#include "ContenedoraMascotas.h"
using namespace std;
class Dueño
{
private:
	string nombre;
	string cedula;
	ContenedoraMascotas mascotas;
public:
	Dueño(string nombre, string cedula);
	~Dueño();
	string getNombre();
	string getCedula();
	void setNombre(string nombre);
	void setCedula(string cedula);
	void agregarMascota(Mascota* mascota);
	Mascota* buscarMascota(string nombre);
	void eliminarMascota(string nombre);
	void mostrarMascotas();
};

