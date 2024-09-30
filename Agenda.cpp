#include "Agenda.h"

Agenda::Agenda(int tamDoc) :dia { "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado" } {
		for (int i = 0; i < 6; i++) {
			dias[i] = new ContenedoraCitasDia(tamDoc);
		}
	}

Agenda::~Agenda() {
		for (int i = 0; i < 6; i++) {
			delete dias[i];
		}
	}

	bool Agenda::agregarCita(int dia, int hora, Doctor* doctor, Mascota* mascota) {
		if (dia >= 0 && dia < 6) {
			if (dias[dia]->estaOcupado(hora, doctor) == false) {

				return dias[dia]->agregarCita(hora, doctor, mascota);
			}
		}
		return false;
	}

	bool Agenda::cancelarCita(int dia, int hora, Doctor* doctor, Mascota* mascota) {
		if (dia >= 0 && dia < 6) {
			if (dias[dia]->estaOcupado(hora, doctor))
				return dias[dia]->cancelarCita(hora, doctor, mascota);
			else
				return false;
		}
		return false;
	}

	string Agenda::imprimirCitasSemana() const {
		stringstream s;
		for (int i = 0; i < 6; i++) {
			s << "Día " << i << ":\n" << dias[i]->toString() << "\n";
		}
		return s.str();
	}

	ContenedoraCitasDia* Agenda::getCitasDia(int dia) {
		return dias[dia];
	}

	string Agenda::toString(string cedula, ContenedoraDoctores* doctores) const {
		stringstream s;
		bool doctorEncontrado = false; // Para verificar si el doctor fue encontrado
		int ancho_columna = 12; // Ancho fijo de cada columna

		// Recorremos los doctores y buscamos por la cédula
		for (int j = 0; j < doctores->getCant(); j++) {
			if (doctores->getDoctorPos(j)->getCedula() == cedula) {
				doctorEncontrado = true; // Marcamos que encontramos al doctor

				// Imprime la cabecera de la tabla con el nombre del doctor y los días
				s << "Doctor: " << doctores->getDoctorPos(j)->getNombre() << "\n";
				s << " Hora  |  " << setw(ancho_columna) << left << dia[0]
					<< "|  " << setw(ancho_columna) << left << dia[1]
					<< "|  " << setw(ancho_columna) << left << dia[2]
					<< "|  " << setw(ancho_columna) << left << dia[3]
					<< "|  " << setw(ancho_columna) << left << dia[4]
					<< "|  " << setw(ancho_columna) << left << dia[5] << "  |\n";
				s << string(90, '-') << endl; // Separador ajustado para más horas y columnas

				
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

			}
		}

		if (!doctorEncontrado) {
			s << "Doctor no encontrado con la cédula: " << cedula << endl;
		}

		return s.str();
	}

	string Agenda::mostrarCitasPorDueno(string cedula) {
		stringstream s;
		bool encontrado = false;

		// Recorremos cada día
		for (int i = 0; i < 6; i++) {
			bool citasEncontrada = false;

			// Revisar las citas en cada día
			for (int j = 0; j < dias[i]->getCant(); j++) {
				Cita* cita = dias[i]->getCita(j);

				// Si la cita pertenece al dueno con la cédula dada
				if (cita->getMascota()->getDueno()->getCedula() == cedula) {
					if (!encontrado) {
						// Solo una vez imprimimos si encontramos la primera cita
						s << "Citas de las mascotas de " << cita->getMascota()->getDueno()->getNombre() << endl;
						s << "----Semana----" << endl;
						encontrado = true;
					}
					// Mostrar la cita
					if (!citasEncontrada) {
						s << endl << "Día " << dia[i] << endl; // Imprimir el día solo una vez
						citasEncontrada = true;
					}
					s << cita->toString() << endl;
				}
			}
		}

		// Si no se encontró ninguna cita
		if (!encontrado) {
			s << "No se encontraron citas para el dueno con cédula " << cedula << ".\n";
		}

		return s.str();
	}




	string Agenda::mostrarPacientesPorDoctor(string cedula, ContenedoraDoctores* doctores) {
		stringstream s;

		// Buscar al doctor que coincide con la cédula
		Doctor* doctor = nullptr;
		for (int j = 0; j < doctores->getCant(); j++) {
			if (doctores->getDoctorPos(j)->getCedula() == cedula) {
				doctor = doctores->getDoctorPos(j);  // Asignamos el doctor encontrado
			}
		}

		// Si el doctor no existe, mostramos un mensaje
		if (!doctor) {
			s << "No se encontró un doctor con la cédula: " << cedula << "\n";
			return s.str();
		}

		s << "Pacientes del doctor: " << doctor->toString() << "\n";

		// Iteramos sobre los días para buscar citas del doctor encontrado
		for (int i = 0; i < 6; i++) { // Días de la semana
			s << "Día " << dia[i] << ":\n";

			// Recorremos las citas del día actual
			for (int k = 0; k < dias[i]->getCant(); k++) {
				Cita* cita = dias[i]->getCita(k);
				// Verificamos que la cita sea con el doctor buscado
				if (cita->getDoctor()->getCedula() == cedula) {
					s << cita->getMascota()->toString() << "La cita es a las " << cita->getHora() << ":00\n\n";
				}
			}
		}

		return s.str();
	}

	string Agenda::mostrarDias()
	{
		stringstream s;
		s << "Días de la semana:\n";
		for (int i = 0; i < 6; i++) {
			s << i+1 << ". " << dia[i] << "\n";
		}
		return s.str();
	}

