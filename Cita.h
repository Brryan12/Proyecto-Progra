#pragma once
#include <string>
#include <sstream>
#include "Doctor.h"  // Incluimos la clase Doctor
#include "Mascota.h" // Incluimos la clase Mascota

class Doctor;
class Cita {
private:
    Doctor* doctor;
    Mascota* mascota;
    int hora;
public:

    /// @brief Constructor de la clase cita
	/// @param doctor doctor que atenderá la cita
	/// @param mascota mascota que asistirá a la cita
	/// @param hora hora de la cita
    Cita(Doctor* doctor, Mascota* mascota, int hora);

	/// @brief Destructor default de la clase Cita
	virtual ~Cita();

	/// @brief Metodo que retorna el doctor de la cita
	/// @return retorna un puntero al doctor de la cita
    Doctor* getDoctor() const;

	/// @brief Metodo que retorna la mascota de la cita
	/// @return retorna un puntero a la mascota de la cita
    Mascota* getMascota() const;

	/// @brief Metodo que retorna la hora de la cita
	/// @return retorna la hora de la cita
    int getHora() const;

	/// @brief Metodo para imprimir la informacion de la cita
	/// @return retorna un string con la informacion de la cita
    string toString() const;
};
