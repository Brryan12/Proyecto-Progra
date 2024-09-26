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
	ContenedoraEspecialidades(int tam);
	Especialidad* getEspecialidad(int posicion);
	virtual ~ContenedoraEspecialidades();
	static string convertirMinusculas(const string& cadena);
	bool yaExiste(const string &nombre);
	bool agregarEspecialidad(Especialidad* nuevaEspecialidad);
	string toString();
	string toString(string especialidades, ContenedoraDoctores* doctores);
	string imprimirDoctoresOrdenados(ContenedoraDoctores *doctores);
};