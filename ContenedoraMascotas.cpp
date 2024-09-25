#include "ContenedoraMascotas.h"

ContenedoraMascotas::ContenedoraMascotas(int tamano)
	: tamano(tamano), cantidad(0) {
	mascotas = new Mascota * [tamano];  
	for (int i = 0; i < tamano; i++) {
		mascotas[i] = nullptr;
	}
}


ContenedoraMascotas::~ContenedoraMascotas(){
	for (int i = 0; i < cantidad; i++) {
		delete mascotas[i];  
	}
	delete[] mascotas;  
}

bool ContenedoraMascotas::agregarMascota(Mascota* mascota)
{
	if (cantidad < tamano && mascota != nullptr) {
		mascotas[cantidad] = mascota;
		cantidad++;
		return true;
	}
	return false;
}

 string ContenedoraMascotas::toString() const
{
	{
		 stringstream s;
		for (int i = 0; i < cantidad; i++) {
			s << "Dueño: " << mascotas[i]->getDueno()->toString() <<  endl
				<< "---MASCOTA---\n"
				<< "Nombre: " << mascotas[i]->getNombre() <<  endl
				<< "Especie: " << mascotas[i]->getEspecie()
				<<  endl <<  endl;
		}
		return s.str();
	}
}

 string ContenedoraMascotas::toString(string cedula) const {
	stringstream s;
	bool encontrado = false;

	if (cantidad == 0) {
		s << "No hay mascotas registradas" << endl;
		return s.str();
	}
	for (int i = 0; i < cantidad; i++) {
		if (mascotas[i]->getDueno()->getCedula() == cedula) {
			if (!encontrado) {
				cout << "\nMascotas registradas por el dueño: " << mascotas[i]->getDueno()->toString() << endl;
				encontrado = true;
			}
			cout << "Nombre: " << mascotas[i]->getNombre()
				<< ", Especie: " << mascotas[i]->getEspecie()
				<< endl;
		}
	}
	if (!encontrado) {
		s << "Error: No hay dueños con la cédula ingresada: "<<cedula<<endl ;
	}

	return s.str();
}

