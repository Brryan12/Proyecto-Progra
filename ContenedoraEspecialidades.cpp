#include "ContenedoraEspecialidades.h"

ContenedoraEspecialidades::ContenedoraEspecialidades(int tam){
	this->especialidad = new Especialidad * [tam];
	this->cant = 0;
	this->tam =tam;
	for (int i = 0; i < tam; i++) {
		especialidad[i] = nullptr;
	}
	
}

Especialidad* ContenedoraEspecialidades::getEspecialidad(int posicion)
{
	if (posicion >= 0 && posicion < cant) {
		return this->especialidad[posicion];;
	}
	else {
		return nullptr;
	}
}

ContenedoraEspecialidades::~ContenedoraEspecialidades()
{
	for (int i = 0; i < cant; i++) {
		delete especialidad[i];
	}
	delete[] especialidad;
}

string ContenedoraEspecialidades::convertirMinusculas(const string& cadena) {
	string resultado = cadena;
	for (int i = 0; i < resultado.length(); i++) { 
		resultado[i] = tolower(resultado[i]);
	}
	return resultado;
}
bool ContenedoraEspecialidades::yaExiste(const string& nombre)
{
	string nombreMinuscula = convertirMinusculas(nombre);

	for (int i = 0; i < cant; i++) {
		if (convertirMinusculas(especialidad[i]->getNombre()) == nombreMinuscula)
			return true;
	}

	return false;
}


bool ContenedoraEspecialidades::agregarEspecialidad(Especialidad* nuevaEspecialidad)
{
	if (cant < tam && !yaExiste(nuevaEspecialidad->getNombre())) { //==false
		especialidad[cant] = nuevaEspecialidad;
		cant++;
		return true;
	}
	else {
		return false;
	}

}

string ContenedoraEspecialidades::toString()
{
	stringstream s;
	s << "Especialidades: " << endl;
	for (int i = 0; i < cant; i++) {
		s << i+1 <<especialidad[i]->toString();
	}

	return s.str();
}

string ContenedoraEspecialidades::toString(string especialidades, ContenedoraDoctores* doctores) {
	stringstream s;
	string nombreMinuscula = convertirMinusculas(especialidades);

	if (cant == 0) {
		s << "No hay especialidades registradas" << endl;
		return s.str();
	}

	// Verificamos si la especialidad existe
	if (yaExiste(especialidades)) {
		bool doctorEncontrado = false;  // Indicador para verificar si hay doctores en la especialidad

		if (doctores->getCant() == 0) {
			s << "No hay doctores registrados en el sistema." << endl;
			return s.str();
		}

		for (int i = 0; i < cant; i++) {
			if (convertirMinusculas(especialidad[i]->getNombre()) == nombreMinuscula) {
				s << "Especialidad: " << especialidad[i]->getNombre() << endl;
				s << "Doctores: " << endl;

				// Recorremos los doctores buscando aquellos con la especialidad
				for (int j = 0; j < doctores->getCant(); j++) {
					if (doctores->getDoctorPos(j)->getEspecialidad() == especialidad[i]) {
						s << " - " << doctores->getDoctorPos(j)->toString() << endl;
						doctorEncontrado = true;  // Se encontró al menos un doctor
					}
				}

				// Si no se encontró ningún doctor en esta especialidad
				if (!doctorEncontrado) {
					s << "No hay doctores registrados en esta especialidad." << endl;
				}
			}
		}
	}
	else {
		s << "No se encontró la especialidad." << endl;
	}

	return s.str();
}

string ContenedoraEspecialidades::imprimirDoctoresOrdenados(ContenedoraDoctores* doctores) {
	 stringstream s;

	for (int i = 0; i < cant; i++) {
		s << "Especialidad: " << especialidad[i]->getNombre() << endl;

		// Imprimir doctores de esta especialidad
		for (int j = 0; j < doctores->getCant(); j++) {
			if (doctores->getDoctorPos(j)->getEspecialidad() == especialidad[i]) {
				s << " - " << doctores->getDoctorPos(j)->toString() << endl;
			}
		}
	}
	return s.str();
}


