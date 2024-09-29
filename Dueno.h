#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Dueno {
private:
    string nombre;
    string cedula;

public:

	/// @brief Constructor de la clase Dueno
    /// @param nombre nombre del dueno
    /// @param cedula identificacion del dueno
    Dueno(string nombre, string cedula);

	/// @brief Destructor default de la clase Dueno
	virtual ~Dueno();

	/// @brief Metodo que retorna el nombre del dueno
	/// @return retorna un string con el nombre del dueno
    string getNombre() const;

	/// @brief Metodo que retorna la cedula del dueno
	/// @return retorna un string con la cedula del dueno
    string getCedula() const;

	/// @brief Metodo que modifica el nombre del dueno
	/// @param nombre nuevo nombre del dueno
    void setNombre(string nombre);

	/// @brief Metodo que modifica la cedula del dueno
	/// @param cedula nueva cedula del dueno
    void setCedula(string cedula);

	/// @brief Metodo para imprimir la informacion del dueno
	/// @return retorna un string con la informacion del dueno
	string toString();
};
