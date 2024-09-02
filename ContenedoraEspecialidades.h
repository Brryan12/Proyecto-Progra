#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedoraEspecialidades
{
private:
	Especialidad** especialidad;
	int cant;
	int tam;
public:
	ContenedoraEspecialidades(int tam);

	virtual ~ContenedoraEspecialidades();

	void agregarEspecialidad(Especialidad* nuevaEspecialidad);

	string toString();
};