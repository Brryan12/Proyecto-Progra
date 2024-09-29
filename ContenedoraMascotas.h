#pragma once
#include "Mascota.h"
#include "ContenedoraDueno.h"
#include <iostream>

class ContenedoraMascotas {
private:
    Mascota** mascotas;
    int tamano;
    int cantidad;

public:

	/// @brief Constructor de la clase ContenedoraMascotas
	/// @param tamano tamano de la contenedora de mascotas
    ContenedoraMascotas(int tamano);

	/// @brief Destructor default de la clase ContenedoraMascotas
    ~ContenedoraMascotas();

	/// @brief Metodo que agrega una mascota a la contenedora
	/// @param mascota mascota a agregar
	/// @return retorna true si se pudo agregar la mascota, false en caso contrario
    bool agregarMascota(Mascota* mascota);

	/// @brief Metodo que retorna la cantidad de mascotas
	/// @return un int con la cantidad de mascotas
    int getCantidad();

	/// @brief Metodo que retorna una mascota de la contenedora por su posicion
	/// @param posicion posicion de la mascota en el vector
	/// @return un puntero a la mascota
    Mascota* getMascota(int posicion);

	/// @brief Metodo que muestra las mascotas de la contenedora
	/// @return retorna un string con las mascotas de la contenedora
    string toString() const;

	/// @brief Metodo que muestra las mascotas por dueno
	/// @param cedula cedula del dueno
	/// @return retorna un string con las mascotas del dueno
	string MascotasPorDueno(string cedula) const;

	/// @brief Metodo que muestra las mascotas ordenadas por dueno
	/// @param duenos contenedora de duenos
	/// @return retorna un string con las mascotas ordenadas por dueno
    string MascotasOrdenadas(ContenedoraDueno *duenos) const;
};
