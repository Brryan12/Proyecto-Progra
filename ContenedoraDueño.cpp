#include "ContenedoraDueño.h"

ContenedoraDueño::ContenedoraDueño(int tam)
{
	this->tam = tam;
	this->cant = 0;
	this->dueños = new Dueño * [tam];
}

ContenedoraDueño::~ContenedoraDueño()
{
	for (int i = 0; i < cant; i++)
	{
		delete dueños[i];
	}
	delete[] dueños;
}

bool ContenedoraDueño::existeDueño(string cedula)
{
	for (int i = 0; i < cant; i++)
	{
		if (dueños[i]->getCedula() == cedula)
		{
			return true;
		}
	}
}

void ContenedoraDueño::agregarDueño(Dueño* dueño){
	if (existeDueño(dueño->getCedula()) == false) { //(!existeDueño(dueño->getCedula()) es lo mismo
		if (cant < tam)
		{
			dueños[cant] = dueño;
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
