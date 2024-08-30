#pragma once
#include "Mascota.h"
#include <sstream>
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
	void agregarMascota(Mascota* mascota);
	string toString();
};

