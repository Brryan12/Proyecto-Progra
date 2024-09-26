#pragma once
#include "Mascota.h"
#include <iostream>

class ContenedoraMascotas {
private:
    Mascota** mascotas;
    int tamano;
    int cantidad;

public:
    ContenedoraMascotas(int tamano);
    ~ContenedoraMascotas();
    bool agregarMascota(Mascota* mascota);
    Mascota* getMascota(int posicion);
    string toString() const;
	string toString(string id) const;
};
