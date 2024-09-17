#pragma once
#include "Cita.h"
#include "Doctor.h"
#include "Dueno.h"
class ContenedoraCitas
{
private:
	Cita** vec;
	int tam;
	int cant;
public:
	ContenedoraCitas(int tam);
	virtual ~ContenedoraCitas();
	bool ingresarCita(Dueno &dueno, Doctor &doc);

};

