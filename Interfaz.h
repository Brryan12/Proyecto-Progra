#include "Include.h"
#include <iostream>
class Interfaz {
public:

	static int getTamEspecialidades() {
		int tamE;
		while (true) {
			cout << "Ingrese la cantidad maxima de especialidades: "; cin >> tamE;
			cin.ignore();
			if (tamE <= 0) {
				cout << "La cantidad de especialidades debe ser mayor a 0" << endl;
			}
			else {
				//system("cls");
				break;
			}
		}
		return tamE;
	}

	static ContenedoraEspecialidades* crearContenedoraEspecialidades(int tamE) {
		ContenedoraEspecialidades* especialidades = new ContenedoraEspecialidades(tamE);

		return especialidades;
	}

	static int getTamDoctores() {
		int tamDoc;
		while (true) {
			cout << "Ingrese la cantidad maxima de doctores: "; cin >> tamDoc;
			cin.ignore();
			if (tamDoc <= 0) {
				cout << "La cantidad de doctores debe ser mayor a 0" << endl;
			}
			else {
				//system("cls");
				break;
			}
		}
		return tamDoc;
	}

	static ContenedoraDoctores* crearContenedoraDoctores(int tamDoc) {
		ContenedoraDoctores* doctores = new ContenedoraDoctores(tamDoc);

		return doctores;
	}

	static int getTamDuenos() {
		int tamDueno;
		while (true) {
			cout << "Ingrese la cantidad maxima de duenos: "; cin >> tamDueno;
			cin.ignore();
			if (tamDueno <= 0) {
				cout << "La cantidad de duenos debe ser mayor a 0" << endl;
			}
			else {
				//system("cls");
				break;
			}
		}
		return tamDueno;
	}

	static ContenedoraDueno* crearContenedoraDuenos(int tamDuenos) {
		ContenedoraDueno* duenos = new ContenedoraDueno(tamDuenos);

		return duenos;
	}

	static int getTamMascotas() {
		int tamM;
		while (true) {
			cout << "Ingrese la cantidad maxima de mascotas en la veterinaria: "; cin >> tamM;
			cin.ignore();
			if (tamM <= 0) {
				cout << "La cantidad de especialidades debe ser mayor a 0" << endl;
			}
			else {
				//system("cls");
				break;
			}
		}
		return tamM;
	}

	static ContenedoraMascotas* crearContenedoraMascotas(int tamM) {
		ContenedoraMascotas* mascotas = new ContenedoraMascotas(tamM);
			return mascotas;
	}

	static int menuPrincipal() {
		int op;
		system("cls");
		endl(cout);
		cout << "----Menu Principal----" << endl;
		cout << "1- Submenú Administración" << endl;
		cout << "2- Submenú Control de Citas " << endl;
		cout << "3- Submenú Búsquedas y Listados" << endl;
		cout << "4- Salir" << endl;
		cout << "Seleccione una opción: "; cin >> op;
		cin.ignore();
		return op;
	}
	static int menuAdministracion() {
		int op1;
		system("cls");
		endl(cout);
		cout << "----Submenú Administración----" << endl;
		cout << "(1) Ingresar Especialidades" << endl;
		cout << "(2) Ingresar Doctor(por especialidad)" << endl;
		cout << "(3) Ingresar Dueño" << endl;
		cout << "(4) Ingresar Mascota(por dueño)" << endl;
		cout << "(0) Regresar al Menú Principal" << endl;
		cout << "Seleccione una opción: "; cin >> op1;
		return op1;
	}
};





