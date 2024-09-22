#include "ContenedoraDueno.h"

ContenedoraDueno::ContenedoraDueno(int tam)
{
	this->tam = tam;
	this->cant = 0;
	this->duenos = new Dueno * [tam];
}

ContenedoraDueno::~ContenedoraDueno()
{
	for (int i = 0; i < cant; i++)
	{
		delete duenos[i];
	}
	delete[] duenos;
}

bool ContenedoraDueno::existeDueno(string cedula)
{
	for (int i = 0; i < cant; i++)
	{
		if (duenos[i] != nullptr && duenos[i]->getCedula() == cedula)
		{
			return true;
		}
	}
	return false;
}

void ContenedoraDueno::agregarDueno(Dueno* dueno){
	if (existeDueno(dueno->getCedula()) == false) { //(!existeDueño(dueño->getCedula()) es lo mismo
		if (cant < tam)
		{
			duenos[cant] = dueno;
			cant++;
		}
		else
		{
			cerr << "No se pueden agregar mas dueños" << endl;
		}
	} else{
		cerr << "Ya existe un dueño con esa cedula" << endl;
	}
}

string ContenedoraDueno::toString() const
{
	return string();
}
