#pragma once
#include "Cita.h"
class ContenedoraCitas
{
private:
	Cita** vec;
	int tam;
	int cant;
public:
	ContenedoraCitas(int tam);
	virtual ~ContenedoraCitas();
	bool ingresarCita();

};

