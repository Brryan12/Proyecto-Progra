#pragma once
#include <iostream>
#include "ContenedoraEspecialidades.h"
#include "ContenedoraDoctores.h"
#include "ContenedoraMascotas.h"
#include "ContenedoraDueno.h"
#include "Agenda.h"
using namespace std;

#if defined(_WIN64) || defined(_WIN32)
#define CLEAR "cls"
#define PAUSE "pause"
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
#define CLEAR "clear"
#define PAUSE "read -n1 -r -p \"Press any key to continue...\""
#endif

class Interfaz {
public:

	/// @brief imprime el menu principal
	/// @return retorna la opcion seleccionada
    static int menuPrincipal();

	/// @brief imprime el menu de administracion
	/// @return retorna la opcion seleccionada
    static int menuAdministracion();

	/// @brief imprime el menu de control de citas
	/// @return retorna la opcion seleccionada
    static int menuControlCitas();

	/// @brief imprime el menu de busqueda y listados
	/// @return retorna la opcion seleccionada
    static int menuBusquedaYListados();

	/// @brief Imprime un menu para ingresar el tamano de las especialidades
	/// @return tamano de la contenedora especialidades
    static int getTamEspecialidades();

	/// @brief Crea un objeto de tipo ContenedoraEspecialidades
	/// @param tamE tamano de la contenedora de especialidades
	/// @return un puntero a ContenedoraEspecialidades
    static ContenedoraEspecialidades* crearContenedoraEspecialidades(int tamE);

	/// @brief Imprime un menu para ingresar el tamano de los doctores
	/// @return tamano de la contenedora doctores
    static int getTamDoctores();

	/// @brief Crea un objeto de tipo ContenedoraDoctores
	/// @param tamDoc tamano de la contenedora doctores
	/// @return un puntero a ContenedoraDoctores
    static ContenedoraDoctores* crearContenedoraDoctores(int tamDoc);

	/// @brief Imprime un menu para ingresar el tamano de los duenos
	/// @return tamano de la contenedora de duenos
    static int getTamDuenos();

	/// @brief Crea un objeto de tipo ContenedoraDueno
	/// @param tamDueno tamano de la contenedora de duenos
	/// @return un puntero a ContenedoraDueno
    static ContenedoraDueno* crearContenedoraDuenos(int tamDueno);

	/// @brief Imprime un menu para ingresar el tamano de las mascotas
	/// @return tamano de la contenedora de mascotas
    static int getTamMascotas();

	/// @brief Crea un objeto de tipo ContenedoraMascotas
	/// @param tamM tamano de la contenedora de mascotas
	/// @return un puntero a ContenedoraMascotas
    static ContenedoraMascotas* crearContenedoraMascotas(int tamM);

	/// @brief Imprime el mensaje para el case default del switch
    static void defaultSwitch();

	/// @brief Imprime el mensaje para regresar al menu principal
    static void regresarPrincipal();

	/// @brief Imprime un menu para agregar especialidades
    /// @param especialidades Contenedora de especialidades
	/// @param tamE tamano de la contenedora de especialidades
	static void agregarEspecialidades(ContenedoraEspecialidades* especialidades, int tamE);

	/// @brief Imprime un menu para agregar doctores
	/// @param doctores Contenedora de doctores
	/// @param especialidades Contenedora de especialidades
	/// @param tamDoc tamano de la contenedora de doctores
    static void agregarDoctores(ContenedoraDoctores* doctores, ContenedoraEspecialidades* especialidades, int tamDoc);

	/// @brief Imprime un menu para agregar duenos
	/// @param duenos Contenedora de duenos
	/// @param tamDueno tamano de la contenedora de duenos
    static void agregarDueno(ContenedoraDueno* duenos, int tamDueno);

	/// @brief Imprime un menu para agregar mascotas
	/// @param mascotas Contenedora de mascotas
	/// @param duenos Contenedora de duenos
	/// @param tamM tamano de la contenedora de mascotas
    static void agregarMascota(ContenedoraMascotas* mascotas, ContenedoraDueno* duenos, int tamM);

	/// @brief Imprime un menu para sacar una cita
	/// @param agenda Agenda de citas
	/// @param doctores Contenedora de doctores
	/// @param mascotas Contenedora de mascotas
	/// @param especialidades Contenedora de especialidades
    static void sacarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas, ContenedoraEspecialidades* especialidades);

	/// @brief Imprime un menu para cancelar una cita
	/// @param agenda Agenda de citas
	/// @param doctores Contenedora de doctores
	/// @param mascotas Contenedora de mascotas
    static void cancelarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas);

	/// @brief Imprime un menu para mostrar el calendario por doctor
	/// @param agenda Agenda de citas
	/// @param doctores Contenedora de doctores
    static void mostrarCalendarioPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);

	/// @brief Imprime un menu para mostrar las citas por dueno
	/// @param agenda Contenedora de dias
	/// @param mascotas Contenedora de mascotas
	/// @param duenos Contenedora de duenos
    static void mostrarCitasPorDueno(Agenda* agenda, ContenedoraMascotas* mascotas, ContenedoraDueno* duenos);

    /// @brief Muestra el listado de especialidades
    /// @param especialidades Contenedora de especialidades
    static void mostrarListadoEspecialidades(ContenedoraEspecialidades* especialidades);

    /// @brief Muestra los doctores filtrados por especialidad
	/// @param especialidades Contenedora de especialidades
	/// @param doctores Contenedora de doctores
    static void mostrarDoctoresPorEspecialidad(ContenedoraEspecialidades* especialidades, ContenedoraDoctores* doctores);

    /// @brief Muestra las mascotas filtradas por sus duenos
	/// @param duenos Contenedora de duenos
	/// @param mascotas Contenedora de mascotas
    static void mostrarDuenosConMascotas(ContenedoraDueno* duenos, ContenedoraMascotas* mascotas);

    /// @brief Muestra los pacientes de un doctor
    /// @param agenda Contenedora de dias
	/// @param doctores Contenedora de doctores
    static void mostrarPacientesPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);
};