#include <iostream>
#include "ContenedoraEspecialidades.h"
#include "Especialidad.h"	
#include "Doctor.h"
#include <sstream>
#include "ContenedoraDoctores.h"
#include "ContenedoraMascotas.h"
#include "ContenedoraDueno.h"


using namespace std;

int main()
{
	ContenedoraEspecialidades* contenedoraEspecialidades = new ContenedoraEspecialidades(10);
	Especialidad* especialidad1 = new Especialidad("Cardiologia", "Especialidad que se encarga de los problemas del corazon");
	Especialidad* especialidad2 = new Especialidad("Oftalmologia", "Especialidad que se encarga de los problemas de los ojos");
	Especialidad* especialidad3 = new Especialidad("Dermatologia", "Especialidad que se encarga de los problemas de la piel");
	contenedoraEspecialidades->agregarEspecialidad(especialidad1);
	contenedoraEspecialidades->agregarEspecialidad(especialidad2);
	contenedoraEspecialidades->agregarEspecialidad(especialidad3);
	//cout << "Ingrese doctor" << endl;
	//cout << "Ingrese nombre: ";
	//string nombre;
	//cin >> nombre;
	//cout << "Ingrese cedula: ";
	//string cedula;
	//cin >> cedula;
	//cout << "Lista de especialidades: " << endl;
	//cout << contenedoraEspecialidades->toString();
	//cout << "ingrese el numero de especialidad: ";
	//int especialidad;
	//cin >> especialidad;
	//Especialidad* especialidadDoctor = nullptr;
	//especialidadDoctor = contenedoraEspecialidades->getEspecialidad(especialidad - 1);
	//Doctor* doctor = new Doctor(nombre, cedula, especialidadDoctor);
	//cout << doctor;
	Doctor* doctor1 = new Doctor("Juan", "123", contenedoraEspecialidades->getEspecialidad(0));
	Doctor* doctor2 = new Doctor("Pedro", "456", contenedoraEspecialidades->getEspecialidad(1));
	Doctor* doctor3 = new Doctor("Maria", "789", contenedoraEspecialidades->getEspecialidad(0));
	Doctor* doctor4 = new Doctor("Jose", "101", contenedoraEspecialidades->getEspecialidad(0));
	Doctor* doctor5 = new Doctor("Ana", "112", contenedoraEspecialidades->getEspecialidad(1));
	Doctor* doctor6 = new Doctor("Luis ", "131", contenedoraEspecialidades->getEspecialidad(2));
	ContenedoraDoctores* contenedoraDoctores = new ContenedoraDoctores(10);
	contenedoraDoctores->agregarDoctor(doctor1);
	contenedoraDoctores->agregarDoctor(doctor2);
	contenedoraDoctores->agregarDoctor(doctor3);
	contenedoraDoctores->agregarDoctor(doctor4);
	contenedoraDoctores->agregarDoctor(doctor5);
	contenedoraDoctores->agregarDoctor(doctor6);
	//cout << contenedoraDoctores->toString();
	//cout << "Ingrese especialidad: ";
	//string nombre;
	//cin >> nombre;
	//if (contenedoraEspecialidades->yaExiste(nombre)) {
	//	cout<<contenedoraDoctores->toString(nombre);
	//}
	//else {
	//	cout << "No existe la especialidad" << endl;
	//}
	cout << "Doctores ordenados por especialidad: " << endl;
	cout << contenedoraEspecialidades->imprimirDoctoresOrdenados(contenedoraDoctores);

	delete contenedoraEspecialidades;
		return 0;
}



