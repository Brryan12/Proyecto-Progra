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

int ContenedoraMascotas::getCantidad()
{
	return cantidad;
}
Mascota* ContenedoraMascotas::getMascota(int posicion) {
	if (posicion >= 0 && posicion < cantidad) {
		return mascotas[posicion-1];
	}
	return nullptr; // Manejar caso de índice inválido

}

 string ContenedoraMascotas::toString() const
{
	{
		 stringstream s;
		for (int i = 0; i < cantidad; i++) {
			s << "dueno: " << mascotas[i]->getDueno()->toString() <<  endl
				<< "---MASCOTA---\n"
				<< "Nombre: " << mascotas[i]->getNombre() <<  endl
				<< "Especie: " << mascotas[i]->getEspecie()
				<<  endl <<  endl;
		}
		return s.str();
	}
}

 string ContenedoraMascotas::MascotasPorDueno(string cedula) const {
	 stringstream s;
	 bool encontrado = false;

	 if (cantidad == 0) {
		 s << "No hay mascotas registradas" << endl;
		 return s.str();
	 }
	 for (int i = 0; i < cantidad; i++) {
		 if (mascotas[i]->getDueno()->getCedula() == cedula) {
			 if (!encontrado) {
				 s << "\nMascotas registradas por el dueno: " << mascotas[i]->getDueno()->toString() << endl;
				 encontrado = true;
			 }
			 s << "Numero: " << i + 1 << ", Nombre: " << mascotas[i]->getNombre()
				 << ", Especie: " << mascotas[i]->getEspecie()
				 << endl;
		 }
	 }
	 if (!encontrado) {
		 s << "Error: No hay duenos con la cédula ingresada: " << cedula << endl;
		 return s.str();
	 }

	 return s.str();
 }

 string ContenedoraMascotas::MascotasOrdenadas(ContenedoraDueno* duenos) const {
	 stringstream s;

	 // Recorremos los duenos
	 for (int i = 0; i < duenos->getCant(); i++) {
		 Dueno* duenoActual = duenos->getDuenoPos(i);
		 s << "Dueno: " << duenoActual->getNombre() << endl;

		 // Recorremos las mascotas
		 for (int j = 0; j < cantidad; j++) {
			 if (mascotas[j]->getDueno() == duenoActual) {
				 s << "Mascota: " << mascotas[j]->getNombre() << endl;
				 s << "Especie: " << mascotas[j]->getEspecie() << endl;
				 s << endl;
			 }
		 }
	 }
	 return s.str();
 }