#pragma once
#include <iomanip>
#include "ContenedoraCitasDia.h"
class Agenda
{
private:
	ContenedoraCitasDia* dias[6]; // 6 días para representar una semana.
	string dia[6];

public:
	/// @brief Constructor de la clase Agenda
	/// @param tamDoc tamaño de la lista de doctores
	Agenda(int tamDoc);

	/// @brief Destructor default de la clase Agenda
	~Agenda();

	/// @brief Agrega una cita a la  agenda para un día y hora específicos
	/// @param dia día de la semana
	/// @param hora hora del día
	/// @param doctor doctor que atenderá la cita
	/// @param mascota mascota que asistirá a la cita
	/// @return true si se pudo agregar la cita, false en caso contrario
	bool agregarCita(int dia, int hora, Doctor* doctor, Mascota* mascota);


	/// @brief Cancela una cita de la agenda para un día y hora específicos
	/// @param dia día de la semana
	/// @param hora hora del día
	/// @param doctor doctor que atenderá la cita
	/// @param mascota mascota que asistirá a la cita
	/// @return true si se pudo cancelar la cita, false en caso contrario
	bool cancelarCita(int dia, int hora, Doctor* doctor, Mascota* mascota);
	
	/// @brief Imprime las citas de la semana
	/// @return retorna un string con las citas de la semana
	string imprimirCitasSemana() const;

	/// @brief Metodo que retorna las citas de un dia
	/// @param dia dia de la semana
	/// @return retorna un puntero a las citas de un dia
	ContenedoraCitasDia* getCitasDia(int dia);

	/// @brief Metodo para mostrar la agenda de un doctor
	/// @param cedula cedula del doctor
	/// @param doctores contenedora de doctores
	/// @return retorna un string con la agenda del doctor
	string toString(string cedula, ContenedoraDoctores* doctores) const;

	/// @brief Metodo para mostrar las citas por dueno
	/// @param cedula cedula del dueno
	/// @param mascotas contenedora de mascotas
	/// @return retorna un string con las citas del dueno
	string mostrarCitasPorDueno(string cedula, ContenedoraMascotas* mascotas);

	/// @brief Metodo para mostrar los pacientes por doctor mediante la cedula del doctor
	/// @param cedula cedula del doctor
	/// @param doctores contenedora de doctores
	/// @return retorna un string con los pacientes del doctor
	string mostrarPacientesPorDoctor(string cedula, ContenedoraDoctores* doctores);
};