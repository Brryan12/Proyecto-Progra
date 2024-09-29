#pragma once
#include <string>
#include "Dueno.h"
#include <iostream>
#include <sstream>
using namespace std;
class Mascota {
private:
    string nombre;
	string especie;
    Dueno* dueno;

public:

	/// @brief Constructor de la clase Mascota
    /// @param nombre nombre de la mascota
	/// @param especie especie de la mascota
	/// @param dueno dueno de la mascota
    Mascota(string nombre, string especie, Dueno* dueno);

	/// @brief Destructor default de la clase Mascota
    virtual ~Mascota();

	/// @brief Metodo que retorna el nombre de la mascota
	/// @return retorna un string con el nombre de la mascota
    string getNombre() const;

	/// @brief Metodo que retorna la especie de la mascota
	/// @return retorna un string con la especie de la mascota
    string getEspecie() const;

	/// @brief Metodo que retorna el dueno de la mascota
	/// @return retorna un puntero al dueno de la mascota
    Dueno* getDueno() const;

	/// @brief Metodo para imprimir la informacion de la mascota
	/// @return retorna un string con la informacion de la mascota
	string toString() const;
};
