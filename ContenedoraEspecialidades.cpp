#include "ContenedoraEspecialidades.h"

ContenedoraEspecialidades::ContenedoraEspecialidades(int tam){
	this->especialidad = new Especialidad * [tam];
	this->cant = 0;
	this->tam =tam;
	
}

ContenedoraEspecialidades::~ContenedoraEspecialidades()
{
	for (int i = 0; i < cant; i++) {
		delete especialidad[i];
	}
	delete[] especialidad;
	cout << "Contenedor destruido" << endl;
}

void ContenedoraEspecialidades::agregarEspecialidad(Especialidad* nuevaEspecialidad)
{
	if (cant < tam) {
		especialidad[cant] = nuevaEspecialidad;
		cant++;
	}
	else {
		cerr << "No se pueden agregar mas especialidades, contenedor lleno." << endl;
	}

}

string ContenedoraEspecialidades::toString()
{
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << especialidad[i]->toString();
	}

	return s.str();
}
