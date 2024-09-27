#pragma once
#include "Cita.h"
#include "ContenedoraMascotas.h"
class ContenedoraCitasDia {
private:
    Cita** citas; 
    int tam;
    int cant;
public:
    ContenedoraCitasDia() {
		this->tam = 11;
		citas = new Cita * [11];
        for (int i = 0; i < tam; i++) {
            citas[i] = nullptr;
        }
		this->cant = 0;
    }

    ~ContenedoraCitasDia() {
        for (int i = 0; i < tam; i++) {
            delete citas[i];
        }
    }

    bool estaOcupado(int hora, Doctor* doctor) const {
        if (citas == nullptr) {
            return false; // No hay citas, se considera como disponible
        }
        for (int i = 0; i < cant; i++) {
            if (citas[i] != nullptr && citas[i]->getHora() == hora && citas[i]->getDoctor()->getCedula() == doctor->getCedula()) {
                return true; // La cita está ocupada
            }
        }
        return false; // La hora está disponible
    }

    bool agregarCita(int hora, Doctor* doctor, Mascota* mascota) {
        if (hora >= 8 && hora < 19 && cant<tam) {
            for (int i = 0; i < cant; i++) {
                if (citas[i]->getMascota() == mascota && citas[i]->getHora() == hora){
                    return false; // La mascota ya tiene una cita a esta hora
                }
            }
            cout << "Agregando cita: " << hora << " para " << mascota->getNombre() << endl;
            citas[hora-8] = new Cita(doctor, mascota, hora);
			cant++;
            return true;
        }
        return false; // No se puede agregar la cita si está llena o la hora es incorrecta
    }

    bool cancelarCita(int hora, Doctor* doctor, Mascota* mascota) {
        for (int i = 0; i < cant; i++) {
            if (citas[i]->getDoctor() == doctor && citas[i]->getMascota() == mascota && citas[i]->getHora() == hora) {
                delete citas[i]; // Liberamos la cita
                for (int j = i; j < cant - 1; ++j) {
                    citas[j] = citas[j + 1]; // Ajustamos el arreglo
                }
                cant--; // Decrementamos el total de citas
                return true;
            }
        }
        return false; // No se encontró la cita
    }

    string toString() const {
        stringstream s;
        for (int i = 0; i < cant; i++) {
            if (citas[i] != nullptr) {
                s << citas[i]->toString() << "\n";
            }
        }
        return s.str();
    }

	//string toString(string cedula) const {
	//	stringstream s;
	//	bool encontrado = false;    
	//	for (int i = 0; i < cant; i++) {
	//		if (citas[i] != nullptr && citas[i]->getMascota()->getDueno()->getCedula() == cedula) {
	//			if (!encontrado) {
	//				s << "Citas de las mascotas de " << citas[i]->getMascota()->getDueno()->getNombre() << endl;
	//				encontrado = true;
	//			}
	//			s << citas[i]->toString() << endl;
	//		}
	//	}
	//	return s.str();
	//}

};
