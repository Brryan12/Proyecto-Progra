#include "Cita.h"

    Cita::Cita(Doctor* doctor, Mascota* mascota, int hora) : doctor(doctor), mascota(mascota), hora(hora) {}

    Cita::~Cita()
    {
    }
    
    Doctor* Cita::getDoctor() const { 
        return doctor; 
    }


    Mascota* Cita::getMascota() const { 
        return mascota; 
    }

    int Cita::getHora() const { 
        return hora; 
    }

    string Cita::toString() const {
        stringstream s;
        s << "Mascota: " << mascota->getNombre() << ", Hora: " << to_string(hora) + ":00, " << mascota->getDueno()->toString();
        return s.str();
    }




