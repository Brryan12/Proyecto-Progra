#include <iostream>
#include "ContenedoraEspecialidades.h"
#include "Especialidad.h"	
#include "Doctor.h"
#include <sstream>
#include "ContenedoraDoctores.h"
#include "ContenedoraMascotas.h"
#include "ContenedoraDueno.h"
#include "ContenedoraCitasDia.h"
#include "Agenda.h"


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
	Doctor* doctor6 = new Doctor("Luis ", "131", contenedoraEspecialidades->getEspecialidad(0));
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
	int hora = 1;	
	string horaStr = to_string(hora) + ":00";
	cout << horaStr << endl;

	Dueno* dueno1 = new Dueno("Juan", "123");
	Dueno* dueno2 = new Dueno("Pedro", "456");
	Dueno* dueno3 = new Dueno("Maria", "789");
	Dueno* dueno4 = new Dueno("Jose", "101");
	Mascota* mascota1 = new Mascota("Firulais", "Perro", dueno1);
	Mascota* mascota2 = new Mascota("Mishi", "Gato", dueno2);
	Mascota* mascota3 = new Mascota("Piolin", "Canario", dueno3);
	Mascota* mascota4 = new Mascota("Rex", "Perro", dueno4);
	Mascota* mascota5 = new Mascota("Garfield", "Gato", dueno1);
	ContenedoraMascotas* contenedoraMascotas = new ContenedoraMascotas(10);
	contenedoraMascotas->agregarMascota(mascota1);
	contenedoraMascotas->agregarMascota(mascota2);
	contenedoraMascotas->agregarMascota(mascota3);
	contenedoraMascotas->agregarMascota(mascota4);
	contenedoraMascotas->agregarMascota(mascota5);
	cout << contenedoraMascotas->toString("123");
	cout << contenedoraEspecialidades->toString("Dermatologia", contenedoraDoctores);
	Doctor *doctor7 = new Doctor("Juan", "457545", contenedoraEspecialidades->getEspecialidad(2));
	Doctor *doctor8= new Doctor("Pedro", "54567", contenedoraEspecialidades->getEspecialidad(2));
	contenedoraDoctores->agregarDoctor(doctor7);
	contenedoraDoctores->agregarDoctor(doctor8);
	cout << contenedoraEspecialidades->toString("Dermatologia", contenedoraDoctores);

	ContenedoraCitasDia* contenedoraCitasDia = new ContenedoraCitasDia();
	Agenda* agenda = new Agenda();
	if (agenda->agregarCita(1,8, doctor1, mascota1)) {
		cout << "jiji" << endl;
	}
	if (agenda->agregarCita(0,8, doctor1, mascota1)) {
		cout << "jiji" << endl;
	}
	else {
		cout << "jaja" << endl;
	}
	if (agenda->agregarCita(1,9, doctor1, mascota1)) {
		cout << "jiji" << endl;
	}
	else {
		cout << "jaja" << endl;
	}
	if (agenda->agregarCita(2, 13, doctor1, mascota1)) {
		cout << "jiji" << endl;
	}
	else {
		cout << "jaja" << endl;
	}
	
	cout<<agenda->toString("123", contenedoraDoctores);
	cout << agenda->toString("123", contenedoraMascotas);
	cout << agenda->mostrarPacientesPorDoctor("123", contenedoraDoctores);


	delete agenda;
	delete contenedoraEspecialidades;
		return 0;
}



