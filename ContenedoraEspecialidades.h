#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedoraEspecialidades
{
private:
	Especialidad** Especial;
	int Cant;
	int tam;
public:
	ContenedoraEspecialidades(int tam) {
		Especial = new Especialidad*[tam];
		this->tam + tam;
	}

	virtual ~ContenedoraEspecialidades() {
		for (int i = 0; i < Cant; i++) {
			delete Especial[i];
		}
		delete[] Especial;
		cout << "Contenedor destruido" << endl;
	}

	void agregarEspecialidad(Especialidad* nuevaEspecialidad) {
		if (Cant < tam) {
			Especial[Cant] = nuevaEspecialidad;
			Cant++;
		}
		else {
			cout << "No se pueden agregar más especialidades, contenedor lleno." << endl;
		}
	}

	string toString();
};