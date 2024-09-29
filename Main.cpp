#include "Interfaz.h"

int main()
{
    int op;
    int op1;
    int op2;
    int op3;
    int pos;
    int dia;
    int hora;
    string cedula;
    string nombre;
    string descripcion;
    string especie;
    ContenedoraDoctores* doctores = nullptr;
    Doctor* doctorPtr = nullptr;
    ContenedoraDueno* duenos = nullptr;
    Agenda* agenda = nullptr;
    Dueno* duenoPtr = nullptr;
    ContenedoraMascotas* mascotas = nullptr;
    Mascota* mascotaPtr = nullptr;
    ContenedoraEspecialidades* especialidades = nullptr;
    Especialidad* especialidadPtr = nullptr;
	int tamE = Interfaz::getTamEspecialidades();
	especialidades = Interfaz::crearContenedoraEspecialidades(tamE);
	int tamDoc = Interfaz::getTamDoctores();
	doctores = Interfaz::crearContenedoraDoctores(tamDoc);
    agenda = new Agenda(tamDoc);
	int tamDueno = Interfaz::getTamDuenos();
	duenos = Interfaz::crearContenedoraDuenos(tamDueno);
	int tamM = Interfaz::getTamMascotas();
	mascotas = Interfaz::crearContenedoraMascotas(tamM);

    do {
		op = Interfaz::menuPrincipal();

        switch (op) {
        case 1:
            do
            {
				op1 = Interfaz::menuAdministracion();
                switch (op1)
                {
                case 1:
					Interfaz::ingresarEspecialidad(especialidades, tamE);
                    break;
                case 2:
                    Interfaz::ingresarDoctores(doctores, especialidades, tamDoc);
                    break;
                case 3:
                    Interfaz::ingresarDueno(duenos, tamDoc);
                    break;
                case 4:
                    
                    break;
                case 0:
                    system("cls");
                    cout << "Regresando al Menú Principal..." << endl;
                    system("pause");

                    break;
                default:
                    system("cls");
                    cout << "Opción no válida. Intente de nuevo." << endl;
                    system("pause");

                    break;
                }
            } while (op1 != 0);
            break;
        case 2:
            do
            {
                system("cls");
                endl(cout);
                cout << "----Submenú Control Citas----" << endl;
                cout << "(1) Sacar Cita" << endl;
                cout << "(2) Cancelar Cita" << endl;
                cout << "(3) Mostrar Calendario de Citas por Doctor" << endl;
                cout << "(4) Mostrar Citas por Dueño" << endl;
                cout << "(0) Regresar al Menú Principal" << endl;
                cout << "Seleccione una opción: "; cin >> op2;
                switch (op2)
                {
                case 1:
                    system("cls");
                    cout << "(1) Sacar Cita" << endl;
                    cout << "Ingrese el dia de la cita: "; cin >> dia;
                    cout << "Ingrese la hora de la cita: "; cin >> hora;
                    if (especialidades->getCant() == 0) {
                        cout << "No hay especialidades agregadas" << endl;
                        system("pause");
                        break;
                    }
                    cout << especialidades->toString() << endl;
                    cout << "Ingrese el numero de la especialidad del doctor: " << endl;
                    cin >> pos;
                    if (especialidades->getEspecialidad(pos) == nullptr)
                    {
                        cout << "Error: No hay especialidades con el numero ingresado" << endl;
                        system("pause");
                        break;
                    }
                    especialidadPtr = especialidades->getEspecialidad(pos);
                    cout << especialidades->DoctorPorEspecialidad(especialidadPtr->getNombre(), doctores);
                    if (doctores->getCant() == 0) {
                        cout << "No hay doctores ingresados";
                        system("pause");
                        break;
                    }
                    cout << "Ingrese la cedula del doctor: " << endl;
                    cin.ignore();
                    getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (!doctores->existeDoctor(cedula)) {
                        cout << "No existe doctor con esa cedula" << endl;
                        system("pause");
                        break;
                    }
                    doctorPtr = doctores->getDoctor(cedula);
                    cout << "Ingrese la cedula del dueño de la mascota: " << endl;
                    getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (mascotas->MascotasPorDueno(cedula) == "No hay mascotas registradas" || mascotas->MascotasPorDueno(cedula) == "Error: No hay dueños con la cédula ingresada: " + cedula)
                    {
                        cout << "No hay mascotas registradas o la cedula esta incorrecta" << endl;
                        system("pause");
                        break;
                    }
                    cout << mascotas->MascotasPorDueno(cedula);
                    cout << "Ingrese el numero de la mascota: "; cin >> pos;
                    if (mascotas->getMascota(pos) == nullptr)
                    {
                        cout << "Error: No hay mascotas con el numero ingresado" << endl;
                        system("pause");
                        break;
                    }
                    mascotaPtr = mascotas->getMascota(pos);
                    if (agenda->agregarCita(dia, hora, doctorPtr, mascotaPtr))
                        cout << "Cita agregada correctamente" << endl;
                    else
                        cout << "Error al agregar la cita" << endl;

                    system("pause");

                    break;
                case 2:
                    system("cls");
                    cout << "(2) Cancelar Cita" << endl;
                    cout << "Ingrese el dia de la cita a cancelar: "; cin >> dia;
                    cout << "Ingrese la hora de la cita a cancelar: "; cin >> hora;
                    cin.ignore();
                    if (doctores->getCant() == 0) {
                        cout << "No hay doctores ingresados";
                        system("pause");
                        break;
                    }
                    cout << "Ingrese la cedula del doctor con el que tiene la cita: ";
                    getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (doctores->getDoctor(cedula) == nullptr)
                    {
                        cout << "Error: No hay doctores con la cedula ingresada: " << cedula << endl;
                        system("pause");
                        break;
                    }
                    doctorPtr = doctores->getDoctor(cedula);
                    cout << "Ingrese la cedula del dueño: ";
                    getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (mascotas->MascotasPorDueno(cedula) == "No hay mascotas registradas" || mascotas->MascotasPorDueno(cedula) == "Error: No hay dueños con la cédula ingresada: " + cedula)
                    {
                        cout << "No hay mascotas registradas o la cedula esta incorrecta" << endl;
                        system("pause");
                        break;
                    }
                    cout << mascotas->MascotasPorDueno(cedula);
                    cout << "Ingrese el numero de la mascota: "; cin >> pos;
                    cin.ignore();
                    if (mascotas->getMascota(pos) == nullptr) {
                        cout << "Error no hay mascotas con ese numero" << endl;
                        system("pause");
                        break;
                    }
                    mascotaPtr = mascotas->getMascota(pos);
                    if (agenda->cancelarCita(dia, hora, doctorPtr, mascotaPtr))
                        cout << "Cita cancelada correctamente" << endl;
                    else
                        cout << "Error al cancelar la cita" << endl;
                    system("pause");

                    break;
                case 3:
                    system("cls");
                    cout << "(3) Mostrar Calendario de Citas por Doctor" << endl;
                    cin.ignore();
                    if (doctores->getCant() == 0) {
                        cout << "No hay doctores ingresados";
                        system("pause");
                        break;
                    }
                    cout << "Ingrese la cedula del doctor para ver su agenda: "; getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (doctores->getDoctor(cedula) != nullptr)
                        cout << agenda->toString(cedula, doctores);
                    else
                        cout << "Error: No hay doctores con la cedula ingresada: " << cedula << endl;
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    cout << "(4) Mostrar Citas por Dueño" << endl;
                    cin.ignore();
                    if (duenos->getCant() == 0) {
                        cout << "No hay duenos ingresados";
                        system("pause");
                        break;
                    }
                    cout << "Ingrese la cedula del dueño para ver sus citas: "; getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    if (mascotas->MascotasPorDueno(cedula) == "No hay mascotas registradas" || mascotas->MascotasPorDueno(cedula) == "Error: No hay dueños con la cédula ingresada: " + cedula)
                    {
                        cout << "No hay mascotas registradas o la cedula esta incorrecta" << endl;
                        system("pause");
                        break;
                    }
                    cout << agenda->mostrarCitasPorDueno(cedula, mascotas);
                    system("pause");

                    break;
                case 0:
                    system("cls");
                    cout << "Regresando al Menú Principal..." << endl;
                    system("pause");

                    break;
                default:
                    system("cls");
                    cout << "Opción no válida. Intente de nuevo." << endl;
                    system("pause");

                    break;
                }
            } while (op2 != 0);
            break;
        case 3:
            do
            {
                system("cls");
                endl(cout);
                cout << "----Submenú Control Citas----" << endl;
                cout << "(1) Mostrar Listado de Especialidades" << endl;
                cout << "(2) Mostrar Listado de Doctores por Especialidad" << endl;
                cout << "(3) Mostrar Dueños con sus Mascotas" << endl;
                cout << "(4) Mostrar Pacientes por Doctor" << endl;
                cout << "(0) Regresar al Menú Principal" << endl;
                cout << "Seleccione una opción: "; cin >> op3;
                switch (op3)
                {
                case 1:
                    system("cls");
                    cout << "(1) Mostrar Listado de Especialidades" << endl;
                    if (especialidades->getCant() > 0 && doctores->getCant()>0) {
                        cout << especialidades->toString();
                    }
                    else
                        cout << "No hay especialidades registradas o no hay doctores registrados" << endl;
                    system("pause");

                    break;
                case 2:
                    system("cls");
                    cout << "(2) Mostrar Listado de Doctores por Especialidad " << endl;
                    if (especialidades->getCant() > 0)
                        cout << especialidades->imprimirDoctoresOrdenados(doctores);
                    else
                        cout << "No hay especialidades registradas" << endl;
                    system("pause");

                    break;
                case 3:
                    system("cls");
                    cout << "(3) Mostrar Dueños con sus Mascotas" << endl;
                    if (duenos->getCant() > 0)
                        cout << mascotas->MascotasOrdenadas(duenos);
					else
						cout << "No hay dueños registrados" << endl;
                    system("pause");

                    break;
                case 4:
                    system("cls");
                    cout << "(4) Mostrar Pacientes por Doctor" << endl;
					if (doctores->getCant() == 0) {
						cout << "No hay doctores registrados en el sistema." << endl;
						system("pause");
						break;
					}
					cout << "Doctores: " << endl;
                    cin.ignore();
					cout << doctores->toString();
					cout << "Ingrese la cedula del doctor para ver sus pacientes: "; getline(cin, cedula);
                    if (cedula.empty()) {
                        cout << "Error: no ingreso una cedula" << endl;
                        system("pause");
                        break;
                    }
                    agenda->mostrarPacientesPorDoctor(cedula,doctores);
                    system("pause");
                    break;
                case 0:
                    system("cls");
                    cout << "Regresando al Menú Principal..." << endl;
                    system("pause");

                    break;
                default:
                    system("cls");
                    cout << "Opción no válida. Intente de nuevo." << endl;
                    system("pause");

                    break;
                }
            } while (op3 != 0);
            break;
        case 4:
            // Salir del programa
            cout << "Saliendo del programa..." << endl;
            system("pause");

            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
            system("pause");

            break;
        }
    } while (op != 4);

    // Liberar memoria
    delete agenda;
    delete especialidades;
    delete doctores;
    delete duenos;
    delete mascotas;

    return 0;
}