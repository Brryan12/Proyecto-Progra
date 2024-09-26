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

	/// @brief Consigue un doctor mediante su posicion en el vector
	/// @param posicion la posicion en la que esta en el vector
	/// @return nullptr si no encontro ningun doctor y un objeto doctor si lo encontro
	Doctor* getDoctor(int posicion);
	
	/// @brief Consigue la cantidad del vector
	/// @return devuelve cant que es la cantidad del vector
	int getCant();

	/// @brief Revisa si el doctor existe
	/// @param cedula la cedula del doctor a buscar
	/// @return true si el doctor existe, false si no existe
	bool existeDoctor(string cedula);

	/// @brief Agrega un doctor al vector de doctores
	/// @param doctor es el doctor a agregar
	/// @return true si se agrego, false si no se agrego
	bool agregarDoctor(Doctor* doctor);

	

	/// @brief 
	/// @return 
	string toString() const;

	/// @brief 
	/// @param especialidad 
	/// @return 
	string toString(string especialidad) const;


};

