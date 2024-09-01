#pragma once
#include "Dueño.h"
class ContenedoraDueño
{
private:
	Dueño** dueños;
	int cant;
	int tam;
public:
	ContenedoraDueño(int tam);
	~ContenedoraDueño();
	bool existeDueño(string cedula);
	void agregarDueño(Dueño* dueño);
	string toString();
};

