#pragma once
#include "Doctor.h"
#include <iostream>
#include <sstream>
using namespace std;
class ContenedoraDoctores
{
	private:
		Doctor** doctores;
		int cant;
		int tam;
public:
	ContenedoraDoctores(int tam);
	~ContenedoraDoctores();
	Doctor* getDoctor(int posicion);
	int getCant();
	/// @brief Revisa si el doctor existe
	/// @param cedula la cedula del doctor a buscar
	/// @return true si el doctor existe, false si no existe
	bool existeDoctor(string cedula);

	/// @brief Agrega un doctor al vector de doctores
	/// @param doctor el doctor a agregar
	/// @return true si se agrego, false si no se agrego
	bool agregarDoctor(Doctor* doctor);

	


	string toString() const;
};

