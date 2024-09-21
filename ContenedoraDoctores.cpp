#include "ContenedoraDoctores.h"

ContenedoraDoctores::ContenedoraDoctores(int tam)
{
	this->doctores = new Doctor * [tam];
	this->cant = 0;
	this->tam = tam;
}

ContenedoraDoctores::~ContenedoraDoctores()
{
	for (int i = 0; i < cant; i++) {
		delete doctores[i];
	}
	delete[] doctores;
	cout << "Contenedor destruido" << endl;

}

bool ContenedoraDoctores::existeDoctor(string cedula)
{
	return false;
}

bool ContenedoraDoctores::agregarDoctor(Doctor* doctor)
{
	if (cant < tam) {
		doctores[cant] = doctor;
		cant++;
		return true;
	}
	else {
		return false;
	}
}

string ContenedoraDoctores::toString() const
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << doctores[i]->toString();
	}
	return s.str();
}
