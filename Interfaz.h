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

	static void ingresarEspecialidad(ContenedoraEspecialidades* especialidades, int tamE) {
		system("cls");
		string nombre, descripcion;
		Especialidad* especialidadPtr = nullptr;
		cout << "(1) Ingresar Especialidades" << endl;
		for (int i = 0; i < tamE; i++) {
			if (especialidades->getCant() == tamE) {
				cout << "Ya no puede ingresar más especialidades, esta lleno" << endl;
				system("pause");
				break;
			}
			cin.ignore();
			cout << "Ingrese el nombre de la especialidad " << i + 1 << ": ";
			getline(cin, nombre);
			if (nombre.empty()) {
				cout << "Error: no ingreso un nombre" << endl;
				system("pause");
				break;
			}

			cout << "Ingrese una descripcion de la especialidad: ";
			getline(cin, descripcion);
			if (descripcion.empty()) {
				cout << "Error: no ingreso una descripcion" << endl;
				system("pause");
				break;
			}
			especialidadPtr = new Especialidad(nombre, descripcion);
			if (especialidades->agregarEspecialidad(especialidadPtr))
				cout << "Especialidad agregada correctamente" << endl;
			else {
				cout << "Error al agregar la especialidad" << endl;
				system("pause");
				break;
			}
			endl(cout);
		}
		cout << especialidades->toString();
		system("pause");
	}

	static void ingresarDoctores(ContenedoraDoctores* doctores, ContenedoraEspecialidades* especialidades, int tamDoc) {
		Especialidad* especialidadPtr = nullptr;
		Doctor* doctorPtr = nullptr;
		int pos;
		string cedula;
		string nombre;
		system("cls");
		cout << "(2) Ingresar Doctor(por especialidad)" << endl;
		if (doctores->getCant() == tamDoc) {
			cout << "Ya no puede ingresar más doctores, esta lleno" << endl;
			system("pause");
			return;
		}
		if (especialidades->getCant() == 0) {
			cout << "Error: No hay especialidades ingresadas" << endl;
			system("pause");
			return;
		}
		cout << especialidades->toString() << endl;
		cout << "Elija la especialidad del doctor: " << endl; cin >> pos;
		if (especialidades->getEspecialidad(pos) == nullptr && pos == 0)
		{
			cout << "Error: No hay especialidades con el numero ingresado" << endl;
			system("pause");
			return;
		}
		especialidadPtr = especialidades->getEspecialidad(pos);
		cin.ignore();
		cout << "Ingrese el nombre del doctor: "; getline(cin, nombre);
		if (nombre.empty()) {
			cout << "Error: no ingreso un nombre" << endl;
			system("pause");
			return;
		}
		cout << "Nombre ingresado: " << nombre << endl; // Depuración
		cout << "Ingrese la cedula del doctor: "; getline(cin, cedula);
		if (cedula.empty()) {
			cout << "Error: no ingreso una cedula" << endl;
			system("pause");
			return;
		}
		cout << "Cédula ingresada: " << cedula << endl; // Depuración
		if (doctores->existeDoctor(cedula)) {
			cout << "Ya existe un doctor con esa cedula";
			system("pause");
			return;
		}
		doctorPtr = new Doctor(nombre, cedula, especialidadPtr);
		if (doctores->agregarDoctor(doctorPtr))
			cout << "Doctor agregado correctamente" << endl;
		else {
			cout << "Error al agregar el doctor" << endl;
			system("pause");
			return;
		}
		system("pause");
	}

	static void ingresarDueno(ContenedoraDueno* duenos, int tamDueno) {
		system("cls");
		string nombre;
		string cedula;
		Dueno* duenoPtr = nullptr;
		cout << "(3) Ingresar Dueño" << endl;
		if (duenos->getCant() == tamDueno) {
			cout << "Ya no puede ingresar más duenos, esta lleno" << endl;
			system("pause");
			return;
		}
		cin.ignore();
		cout << "Ingrese el nombre del dueño: "; getline(cin, nombre);
		if (nombre.empty()) {
			cout << "Error: no ingreso un nombre" << endl;
			system("pause");
			return;
		}
		cout << "Ingrese la cedula del dueño: "; getline(cin, cedula);
		if (cedula.empty()) {
			cout << "Error: no ingreso una cedula" << endl;
			system("pause");
			return;
		}
		if (duenos->existeDueno(cedula)) {
			cout << "Ya existe un dueño con esa cedula" << endl;
			system("pause");
			return;
		}
		duenoPtr = new Dueno(nombre, cedula);
		if (duenos->agregarDueno(duenoPtr))
			cout << "Dueño agregado correctamente" << endl;
		else {
			cout << "Error al agregar el dueño" << endl;
			system("pause");
		}
	}

	static void ingresarMascota(ContenedoraMascotas* mascotas, ContenedoraDueno* duenos, int tamM) {
		system("cls");
		string cedula;
		string nombre;
		string especie;
		Dueno* duenoPtr = nullptr;
		Mascota* mascotaPtr = nullptr;
		cout << "(4) Ingresar Mascota(por dueño)" << endl;
		if (mascotas->getCantidad() == tamM) {
			cout << "Ya no puede ingresar más mascotas, esta lleno" << endl;
			system("pause");
			return;
		}
		if (duenos->getCant() == 0) {
			cout << "Error: No hay dueños ingresados" << endl;
			system("pause");
			return;
		}
		cout << duenos->toString() << endl;
		cout << "Elija la cedula del dueño de la mascota: "; getline(cin, cedula);
		if (cedula.empty()) {
			cout << "Error: no ingreso una cedula" << endl;
			system("pause");
			return;
		}
		if (duenos->getDueno(cedula) == nullptr)
		{
			cout << "Error: No hay dueños con la cedula ingresada: " << cedula << endl;
			system("pause");
			return;
		}
		duenoPtr = duenos->getDueno(cedula);
		cout << "Ingrese el nombre de la mascota: "; getline(cin, nombre);
		if (nombre.empty()) {
			cout << "Error: no ingreso un nombre" << endl;
			system("pause");
			return;
		}
		cout << "Ingrese la especia de la mascota: "; getline(cin, especie);
		if (especie.empty()) {
			cout << "Error: no ingreso una especie" << endl;
			system("pause");
			return;
		}
		mascotaPtr = new Mascota(nombre, especie, duenoPtr);
		if (mascotas->agregarMascota(mascotaPtr))
			cout << "Mascota agregada correctamente" << endl;
		else
			cout << "Error al agregar la mascota" << endl;
		system("pause");


	}
};