#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Dueno {
private:
    string nombre;
    string cedula;

public:
    Dueno(string nombre, string apellido);
	virtual ~Dueno();
    string getNombre() const;
    string getCedula() const;
    void setNombre(string nombre);
    void setCedula(string cedula);
	string toString();
};
