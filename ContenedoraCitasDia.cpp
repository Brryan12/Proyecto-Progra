#include "ContenedoraCitasDia.h"

ContenedoraCitasDia::ContenedoraCitasDia(int tamDoc) : tam(11*tamDoc), cant(0) {
    citas = new Cita * [tam];
    for (int i = 0; i < tam; i++) {
        citas[i] = nullptr;
    }
}

ContenedoraCitasDia::~ContenedoraCitasDia() {
    for (int i = 0; i < tam; i++) {
        delete citas[i];
    }
}

int ContenedoraCitasDia::getCant() {
    return cant;
}

Cita* ContenedoraCitasDia::getCita(int posicion) {
    if (posicion > 0 && posicion <= cant) {
        return citas[posicion];
    }

    return nullptr;
}

bool ContenedoraCitasDia::estaOcupado(int hora, Doctor* doctor) const {
    if (citas == nullptr) {
        return false; // 
    }
    for (int i = 0; i < cant; i++) {
        if (citas[i] != nullptr && citas[i]->getHora() == hora && citas[i]->getDoctor()->getCedula() == doctor->getCedula()) {
            return true; // La cita está ocupada
        }
    }
    return false; 
}

bool ContenedoraCitasDia::agregarCita(int hora, Doctor* doctor, Mascota* mascota) {
    if (hora >= 8 && hora < 19 && cant < tam) {
        // Verificar si ya hay una cita para el mismo doctor a la misma hora
        for (int i = 0; i < cant; i++) {
            // Comparar tanto la hora como la cédula del doctor para asegurarnos
            if (citas[i]->getHora() == hora && citas[i]->getDoctor()->getCedula() == doctor->getCedula() && citas[i]->getMascota()->getNombre() == mascota->getNombre()) {
                return false; // El doctor ya tiene una cita a esta hora
            }
        }
        // Si no hay conflictos, agregamos la cita
        citas[cant++] = new Cita(doctor, mascota, hora);
        return true;
    }
    return false; // Hora fuera de rango o el día está lleno
}

bool ContenedoraCitasDia::cancelarCita(int hora, Doctor* doctor, Mascota* mascota) {
    for (int i = 0; i < cant; i++) {
        if (citas[i]->getDoctor() == doctor && citas[i]->getMascota() == mascota && citas[i]->getHora() == hora) {
            delete citas[i];
            for (int j = i; j < cant - 1; ++j) {
                citas[j] = citas[j + 1]; 
            }
            cant--; 
            return true;
        }
    }
    return false; 
}

string ContenedoraCitasDia::toString() const {
    stringstream s;
    for (int i = 0; i < cant; i++) {
        if (citas[i] != nullptr) {
            s << citas[i]->toString() << "\n";
        }
    }
    return s.str();
}