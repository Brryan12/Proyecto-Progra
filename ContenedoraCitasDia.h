#pragma once
#include "Cita.h"
#include "ContenedoraMascotas.h"
#include "ContenedoraDoctores.h"
class ContenedoraCitasDia {
private:
    Cita** citas;
    int tam;
    int cant;
public:

	/// @brief Constructor de la clase ContenedoraCitasDia
	/// @param tamDoc tamaño de la contenedora de doctores
    ContenedoraCitasDia(int tamDoc);

	/// @brief Destructor default de la clase ContenedoraCitasDia
    ~ContenedoraCitasDia();
   
	/// @brief Metodo que retorna la cantidad de citas
	/// @return retorna la cantidad de citas
    int getCant();

	/// @brief Metodo que retorna una cita de la contenedora
	/// @param posicion posicion de la cita en el vector
    Cita* getCita(int posicion);

	/// @brief Metodo que verifica si una cita está ocupada
	/// @param hora hora de la cita
	/// @param doctor doctor de la cita
	/// @return retorna true si la cita está ocupada, false en caso contrario
    bool estaOcupado(int hora, Doctor* doctor) const;

	/// @brief Metodo que agrega una cita a la contenedora
	/// @param hora hora de la cita
	/// @param doctor doctor de la cita
	/// @param mascota mascota de la cita
	/// @return retorna true si se pudo agregar la cita, false en caso contrario
    bool agregarCita(int hora, Doctor* doctor, Mascota* mascota);

	/// @brief Metodo que cancela una cita de la contenedora
	/// @param hora hora de la cita
	/// @param doctor doctor de la cita
	/// @param mascota mascota de la cita
	/// @return retorna true si se pudo cancelar la cita, false en caso contrario
    bool cancelarCita(int hora, Doctor* doctor, Mascota* mascota);

	/// @brief Metodo para imprimir la informacion de la contenedora
	/// @return retorna un string con la informacion de la contenedora
    string toString() const;
};
