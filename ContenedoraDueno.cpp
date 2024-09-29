#include "ContenedoraDueno.h"

ContenedoraDueno::ContenedoraDueno(int tam): tam(tam), cant(0){
	this->duenos = new Dueno * [tam];
	for (int i = 0; i < tam; i++) {
		duenos[i] = nullptr;
	}
}

ContenedoraDueno::~ContenedoraDueno()
{
	for (int i = 0; i < cant; i++)
	{
		delete duenos[i];
	}
	delete[] duenos;
}

int ContenedoraDueno::getCant()
{
	return cant;
}

Dueno* ContenedoraDueno::getDuenoPos(int pos)
{
	if (pos >= 0 && pos < cant) {
		return duenos[pos];
	}
	return nullptr;
}

Dueno* ContenedoraDueno::getDueno(string cedula) {
	for (int i = 0; i < cant; i++) {
		if (duenos[i] != nullptr && duenos[i]->getCedula() == cedula) {
			return duenos[i];
		}
	}
	return nullptr;
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

bool ContenedoraDueno::agregarDueno(Dueno* dueno) {
	if (existeDueno(dueno->getCedula()) == false) { //(!existeDueño(dueño->getCedula()) es lo mismo
		if (cant < tam)
		{
			duenos[cant] = dueno;
			cant++;
			return true;
		}
		else
			return false;
	}
}

string ContenedoraDueno::toString() const
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << duenos[i]->toString();
	}
	return s.str();
}
