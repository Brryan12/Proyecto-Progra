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
#include "Due�o.h"
#include "Doctor.h"
#include "Mascota.h"
using namespace std;



class Cita {
private:
    Due�o* due�o;
    Mascota* mascota;
    Doctor* doctor;
    string hora, dia;

    public:
        Cita();
        Cita(Due�o*, Mascota*, Doctor*, string , string);
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