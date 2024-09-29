#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>


class Doctor
{
private:
	string nombre;
	string cedula;
	Especialidad* especialidad;
public:
	/// @brief Constructor de la clase Doctor
	/// @param nombre nombre del doctor
	/// @param cedula cedula del doctor
	/// @param especialidad especialidad del doctor
	Doctor(string nombre, string cedula, Especialidad* especialidad);

	/// @brief Destructor default de la clase Doctor
	~Doctor();

	/// @brief Metodo que retorna el nombre del doctor
	string getNombre();

	/// @brief Metodo que retorna la cedula del doctor
	string getCedula();

	/// @brief Metodo que retorna la especialidad del doctor
	Especialidad* getEspecialidad();

	/// @brief Metodo que modifica el nombre del doctor
	void setNombre(string nombre);

	/// @brief Metodo que modifica la cedula del doctor
	void setCedula(string cedula);

	/// @brief Metodo que modifica la especialidad del doctor
	void setEspecialidad(Especialidad* especialidad);

	/// @brief Metodo para imprimir la inforacion del doctor
	/// @return retorna un string con la informacion del doctor
	string toString();
};

