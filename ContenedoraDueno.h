#pragma once
#include "Dueno.h"
class ContenedoraDueno
{
private:
	Dueno** duenos;
	int cant;
	int tam;
public:
	ContenedoraDueno(int tam);
	~ContenedoraDueno();
	bool existeDueno(string cedula);
	void agregarDueno(Dueno* dueno);
	string toString();
};

