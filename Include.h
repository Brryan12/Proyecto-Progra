#pragma once
// Incluir todos los headers necesarios para el uso del main y mantener el orden de los includes.
#include "Interfaz.h"

/// @brief Metodo apra imprimir el switch con la implementacion de la interfaz
void mostrarSwitch() {
    int op;
    int op1;
    int op2;
    int op3;
    ContenedoraDoctores* doctores = nullptr;
    ContenedoraDueno* duenos = nullptr;
    Agenda* agenda = nullptr;
    ContenedoraMascotas* mascotas = nullptr;
    ContenedoraEspecialidades* especialidades = nullptr;
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
                    Interfaz::agregarEspecialidades(especialidades, tamE);
                    break;

                case 2:
                    Interfaz::agregarDoctores(doctores, especialidades, tamDoc);
                    break;
                case 3:
                    Interfaz::agregarDueno(duenos, tamDueno);
                    break;
                case 4:
                    Interfaz::agregarMascota(mascotas, duenos, tamM);
                    break;
                case 0:
                    Interfaz::regresarPrincipal();
                    break;
                default:
                    Interfaz::defaultSwitch();
                    break;
                }
            } while (op1 != 0);
            break;
        case 2:
            do
            {
                op2 = Interfaz::menuControlCitas();
                switch (op2)
                {
                case 1:
                    Interfaz::sacarCita(agenda, doctores, mascotas, especialidades);
                    break;
                case 2:

                    break;
                case 3:
                    Interfaz::mostrarCalendarioPorDoctor(agenda, doctores);
                    break;
                case 4:
                    Interfaz::mostrarCitasPorDueno(agenda, mascotas, duenos);
                    break;
                case 0:
                    Interfaz::regresarPrincipal();
                    break;
                default:
                    Interfaz::defaultSwitch();
                    break;
                }
            } while (op2 != 0);
            break;
        case 3:
            do
            {
                op3 = Interfaz::menuBusquedaYListados();
                switch (op3)
                {
                case 1:
                    Interfaz::mostrarListadoEspecialidades(especialidades);
                    break;
                case 2:
                    Interfaz::mostrarDoctoresPorEspecialidad(especialidades, doctores);
                    break;
                case 3:
                    Interfaz::mostrarDuenosConMascotas(duenos, mascotas);
                    break;
                case 4:
                    Interfaz::mostrarPacientesPorDoctor(agenda, doctores);
                    break;
                case 0:
                    Interfaz::regresarPrincipal();
                    break;
                default:
                    Interfaz::defaultSwitch();
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
            Interfaz::defaultSwitch();
            break;
        }
    } while (op != 4);

    // Liberar memoria
    delete agenda;
    delete especialidades;
    delete doctores;
    delete duenos;
    delete mascotas;

}