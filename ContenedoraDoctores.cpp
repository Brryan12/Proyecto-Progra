#include "ContenedoraDoctores.h"

ContenedoraDoctores::ContenedoraDoctores(int tam)
{
    this->doctores = new Doctor * [tam];
    this->cant = 0;
    this->tam = tam;
    for (int i = 0; i < tam; i++) {
        doctores[i] = nullptr;
    }
}

ContenedoraDoctores::~ContenedoraDoctores()
{
    for (int i = 0; i < cant; i++) {
        delete doctores[i];
    }
    delete[] doctores;
}

bool ContenedoraDoctores::existeDoctor( string cedula)
{
    for (int i = 0; i < cant; i++) {
        if (doctores[i]->getCedula() == cedula) {
            return true;
        }
    }
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

Doctor* ContenedoraDoctores::getDoctor(int posicion) {
    if (posicion >= 0 && posicion < cant) {
        return doctores[posicion];
    }
    return nullptr; // Manejar caso de índice inválido
}


int ContenedoraDoctores::getCant()
{
    return cant;
}

 string ContenedoraDoctores::toString() const
{
     stringstream s;
    for (int i = 0; i < cant; i++) {
        s << doctores[i]->toString();
    }
    return s.str();
 }

 string ContenedoraDoctores::toString(string cedula) const
 {
	 stringstream s;
	 bool encontrado = false;

	 if (cant == 0) {
		 s << "No hay doctores registrados" << endl;
		 return s.str();
	 }
	 for (int i = 0; i < cant; i++) {
		 if (doctores[i]->getCedula() == cedula) {
			 s << doctores[i]->toString();
			 encontrado = true;
		 }
	 }
	 if (!encontrado) {
		 s << "Doctor no encontrado" << endl;
	 }
	 return s.str();
 }
