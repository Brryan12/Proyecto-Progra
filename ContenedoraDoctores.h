#pragma once
#include "Doctor.h"
#include <iostream>
#include <sstream>
class ContenedoraDoctores
{
	private:
		Doctor** doctores;
		int cant;
		int tam;
public:
	ContenedoraDoctores(int tam);
	~ContenedoraDoctores();
	bool existeDoctor(string cedula);
	bool agregarDoctor(Doctor* doctor);
	string toString() const;
};

