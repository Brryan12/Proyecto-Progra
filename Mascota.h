#pragma once
#include <string>
#include "Dueno.h"
#include <iostream>
#include <sstream>
using namespace std;
class Mascota {
private:
    string nombre;
	string especie;
    Dueno* dueno;

public:
    // Constructor que requiere un dueño
    Mascota(string nombre, string especie, Dueno* dueno);
	virtual ~Mascota();
    string getNombre() const;
    string getEspecie() const;
    Dueno* getDueno() const;
    void setDueno(Dueno* nuevoDueno);
    void setNombre(string nuevoNombre);
    void setEspecie(string nuevaEspecie);
    bool tieneDueno() const;
};
