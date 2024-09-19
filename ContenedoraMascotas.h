#pragma once
#include "Mascota.h"
#include <sstream>
#include "Dueno.h"
using namespace std;	

class ContenedoraMascotas
{
private:
	Mascota** mascotas;
	int cantidad;
	int tam;
public:
	ContenedoraMascotas(int tam);
	~ContenedoraMascotas();
	void agregarMascota(Mascota* mascota, Dueno* dueno);
	string toString();
};

