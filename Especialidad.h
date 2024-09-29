#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Especialidad
{
private:
	string nombre;
	string descripcion;
public:

	/// @brief Constructor de la clase Especialidad
	/// @param nombre nombre de la especialidad
	/// @param descripcion descripcion de la especialidad
	Especialidad(string nombre, string descripcion);

	/// @brief Destructor default de la clase Especialidad
	~Especialidad();

	/// @brief Metodo que retorna el nombre de la especialidad
	/// @return retorna un string con el nombre de la especialidad
	string getNombre();

	/// @brief Metodo que retorna la descripcion de la especialidad
	/// @return retorna un string con la descripcion de la especialidad
	string getDescripcion();

	/// @brief Metodo que modifica el nombre de la especialidad
	/// @param nombre nuevo nombre de la especialidad
	void setNombre(string nombre);

	/// @brief Metodo que modifica la descripcion de la especialidad
	/// @param descripcion nueva descripcion de la especialidad
	void setDescripcion(string descripcion);

	/// @brief Metodo para imprimir la informacion de la especialidad
	/// @return retorna un string con la informacion de la especialidad
	string toString();

};

