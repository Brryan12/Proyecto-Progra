#pragma once
#include "Especialidad.h"
#include "ContenedoraDoctores.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedoraEspecialidades
{
private:
	Especialidad** especialidad;
	int cant;
	int tam;
public:
	/// @brief Constructor de la clase ContenedoraEspecialidades
	/// @param tam tamano del vector de especialidades
	ContenedoraEspecialidades(int tam);

	/// @brief Devuelve una especialidad mediante la posicion en el vector
	/// @param posicion posicion de la especialidad en el vector
	/// @return un puntero a la especialidad
	Especialidad* getEspecialidad(int posicion);

	/// @brief Devuelve la cantidad de especialidades
	/// @return la cantidad de especialidades
	int getCant();

	/// @brief Descructor default de la clase ContenedoraEspecialidades
	virtual ~ContenedoraEspecialidades();

	/// @brief Metodo que convierte el string ingresado a minusculas
	/// @param cadena string que se desea pasar a minusculas
	/// @return string en minusculas
	static string convertirMinusculas(const string& cadena);

	/// @brief Metodo que verifica si una especialidad ya existe
	/// @param nombre nombre de la especialidad a buscar
	/// @return true si la especialidad ya existe, false en caso contrario
	bool yaExiste(const string &nombre);

	/// @brief Metodo que agrega una especialidad al vector de especialidades
	/// @param nuevaEspecialidad es la especialidad a agregar
	/// @return true si se agrego, false si no se agrego
	bool agregarEspecialidad(Especialidad* nuevaEspecialidad);

	/// @brief Metodo que muestra todas las especialidades
	/// @return retona un string con todas las especialidades
	string toString();

	/// @brief Metodo que muestra los doctores por especialidad
	/// @param especialidades especialidad de los doctores a mostrar
	/// @param doctores contenedora de doctores
	/// @return retorna un string con los doctores de la especialidad
	string DoctorPorEspecialidad(string especialidades, ContenedoraDoctores* doctores);

	/// @brief Metodo que imprime los doctores ordenados por especialidad
	/// @param doctores contenedora de doctores
	/// @return retorna un string con los doctores ordenados por especialidad
	string imprimirDoctoresOrdenados(ContenedoraDoctores *doctores);
};