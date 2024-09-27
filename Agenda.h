#pragma once
#include "ContenedoraCitasDia.h"
#include "ContenedoraDoctores.h"
#include <iomanip>
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
            bool doctorEncontrado = false; // Para verificar si el doctor fue encontrado
            int ancho_columna = 12; // Ancho fijo de cada columna

            // Recorremos los doctores y buscamos por la cédula
            for (int j = 0; j < doctores->getCant(); j++) {
                if (doctores->getDoctorPos(j)->getCedula() == cedula) {
                    doctorEncontrado = true; // Marcamos que encontramos al doctor

                    // Imprime la cabecera de la tabla con el nombre del doctor y los días
                    s << "Dentista: " << doctores->getDoctorPos(j)->getNombre() << "\n";
                    s << " Hora  |  " << setw(ancho_columna) << left << dia[0]
                        << "|  " << setw(ancho_columna) << left << dia[1]
                        << "|  " << setw(ancho_columna) << left << dia[2]
                        << "|  " << setw(ancho_columna) << left << dia[3]
                        << "|  " << setw(ancho_columna) << left << dia[4]
                        << "|  " << setw(ancho_columna) << left << dia[5] << "  |\n";
                    s << string(90, '-') << endl; // Separador ajustado para más horas y columnas

                    // Recorre las horas del día (de 8:00 a 19:00)
                    for (int hora = 8; hora < 19; hora++) {
                        s << (hora < 10 ? " " : "") << hora << ":00  |"; // Alineación de la hora

                        // Recorre los días de la semana y verifica si está ocupado o disponible
                        for (int dia = 0; dia < 6; dia++) {
                            if (dias[dia]->estaOcupado(hora, doctores->getDoctorPos(j))) {
                                s << " " << setw(ancho_columna) << left << "Ocupado" << "|";
                            }
                            else {
                                s << " " << setw(ancho_columna) << left << "Disponible" << "|";
                            }
                        }
                        s << "\n";
                        s << string(90, '-') << endl; // Separador ajustado según el número de columnas y horas
                    }
                    break; // Detenemos la búsqueda una vez que encontramos al doctor
                }
            }

            if (!doctorEncontrado) {
                s << "Doctor no encontrado con la cédula: " << cedula << endl;
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

		string mostrarPacientesPorDoctor(string cedula, ContenedoraDoctores* doctores) {
			stringstream s;
			for (int i = 0; i < 6; i++) {
				for (int j = i; j < doctores->getCant(); j++) {
					if (doctores->getDoctorPos(j)->getCedula() == cedula) {
						s << "Pacientes del " << doctores->getDoctorPos(j)->toString();
					}
				}
				s <<dia[i]<< dias[i]->toString() << "\n";
			}
			return s.str();
		}
    };