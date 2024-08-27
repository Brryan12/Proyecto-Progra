#pragma once
#include "Dueño.h"
class Mascota
{
private:
	string nombre;
	string especie;
	Dueño* dueño;
public:
	Mascota(string nombre, string especie, Dueño* dueño);
	~Mascota();
	string getNombre();
	string getEspecie();
	Dueño* getDueño();
	void setNombre(string nombre);
	void setEspecie(string especie);
	void setDueño(Dueño* dueño);
};

