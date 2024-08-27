#pragma once
#include "Mascota.h"
class ContenedoraMascotas
{
private:
	Mascota** mascotas;
	int cantidad;
	int tam;
public:
	ContenedoraMascotas(int tam);
	~ContenedoraMascotas();
	void agregarMascota(Mascota* mascota);
	Mascota* buscarMascota(string nombre);
	void eliminarMascota(string nombre);
	void mostrarMascotas();
};

