#pragma once
#include "ContenedoraCitasDia.h"
#include "ContenedoraDoctores.h"
class Agenda
{
    private:
        ContenedoraCitasDia* dias[6]; // 6 días para representar una semana.
		string dia[6] = { "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado" };
    public:
		Agenda() {
			for (int i = 0; i < 6; i++) {
				dias[i] = new ContenedoraCitasDia();
			}
		}

		~Agenda() {
			for (int i = 0; i < 6; i++) {
				delete dias[i];
			}
		}

        bool agregarCita(int dia, int hora, Doctor* doctor, Mascota* mascota) {
            if (dia >= 0 && dia < 6) {
                return dias[dia]->agregarCita(hora, doctor, mascota);
            }
            return false;
        }

        bool cancelarCita(int dia, int hora, Doctor* doctor, Mascota* mascota) {
            if (dia >= 0 && dia < 6) {
                return dias[dia]->cancelarCita(hora, doctor, mascota);
            }
            return false;
        }

		std::string imprimirCitasSemana() const {
			std::stringstream s;
			for (int i = 0; i < 6; i++) {
				s << "Día " << i << ":\n" << dias[i]->toString() << "\n";
			}
			return s.str();
		}

        ContenedoraCitasDia* getCitasDia(int dia) {
            return dias[dia];
        }

		string toString(string cedula, ContenedoraDoctores* doctores) const {
			stringstream s;
			for (int i = 0; i < 6; i++) {
				for (int j = i; j < doctores->getCant(); j++) {
					if (doctores->getDoctorPos(j)->getCedula() == cedula) {
							s <<"Angenda del " << doctores->getDoctorPos(j)->toString();
							s << "----Semana----" << endl;
					}
				}
				s <<"Día " << dia[i] << ":\n" << dias[i]->toString() << "\n";
			}
			return s.str();
		}

		string toString(string cedula, ContenedoraMascotas* mascotas) {
			stringstream s;
			bool encontrado = false;
			for (int i = 0; i < 6; i++) {
				for (int j = i; j < mascotas->getCantidad(); j++) {
					if (mascotas->getMascota(j)->getDueno()->getCedula() == cedula) {
						if (!encontrado) {
							s << "Citas de las mascotas de " << mascotas->getMascota(j)->getDueno()->getNombre() << endl;
							s << "----Semana----" << endl;
							encontrado = true;
						}
					}
				}
				s << "Día " << dia[i] << ":\n" << dias[i]->toString() << "\n";
			}
			return s.str();
		}
    };