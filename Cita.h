#pragma once
#include <string>
#include <sstream>
#include "Doctor.h"  // Incluimos la clase Doctor
#include "Mascota.h" // Incluimos la clase Mascota

class Doctor;
class Cita {
private:
    Doctor* doctor;
    Mascota* mascota;
    int hora;
public:
    Cita(Doctor* doctor, Mascota* mascota, int hora);
        

    Doctor* getDoctor() const;
    Mascota* getMascota() const;
    int getHora() const;

    string toString() const;
};
