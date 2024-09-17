#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Cita
{
private:
string dia;
	string hora;

public:
	Cita(string dia, string hora);
	virtual ~Cita();
};



/*
Intente meter un codigo de citas y me tiro un monton de errores
#pragma once
#include <iostream>
#include <sstream>
#include "Dueño.h"
#include "Doctor.h"
#include "Mascota.h"
using namespace std;



class Cita {
private:
    Dueño* dueño;
    Mascota* mascota;
    Doctor* doctor;
    string hora, dia;

    public:
        Cita();
        Cita(Dueño*, Mascota*, Doctor*, string , string);
        virtual ~Cita();

        string getDia();
        void setDia(string);

        string getHora();
        void setHora(string);

        void sacarCita();
        void cancelCita();
       string mostrarCitaDoc();
        string mostrarCitaDue();

};


*/