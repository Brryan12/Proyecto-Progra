#pragma once
#include <iostream>
#include "ContenedoraEspecialidades.h"
#include "ContenedoraDoctores.h"
#include "ContenedoraMascotas.h"
#include "ContenedoraDueno.h"
#include "Agenda.h"
using namespace std;

class Interfaz {
public:
    static int menuPrincipal();
    static int menuAdministracion();
    static int menuControlCitas();
    static int menuBusquedaYListados();
    static int getTamEspecialidades();
    static ContenedoraEspecialidades* crearContenedoraEspecialidades(int tamE);
    static int getTamDoctores();
    static ContenedoraDoctores* crearContenedoraDoctores(int tamDoc);
    static int getTamDuenos();
    static ContenedoraDueno* crearContenedoraDuenos(int tamDueno);
    static int getTamMascotas();
    static ContenedoraMascotas* crearContenedoraMascotas(int tamM);
    static void defaultSwitch();
    static void regresarPrincipal();
    static void agregarEspecialidades(ContenedoraEspecialidades* especialidades, int tamE);
    static void agregarDoctores(ContenedoraDoctores* doctores, ContenedoraEspecialidades* especialidades, int tamDoc);
    static void agregarDueno(ContenedoraDueno* duenos, int tamDueno);
    static void agregarMascota(ContenedoraMascotas* mascotas, ContenedoraDueno* duenos, int tamM);
    static void sacarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas, ContenedoraEspecialidades* especialidades);
    static void cancelarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas);
    static void mostrarCalendarioPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);
    static void mostrarCitasPorDueno(Agenda* agenda, ContenedoraMascotas* mascotas, ContenedoraDueno* duenos);
    static void mostrarListadoEspecialidades(ContenedoraEspecialidades* especialidades);
    static void mostrarDoctoresPorEspecialidad(ContenedoraEspecialidades* especialidades, ContenedoraDoctores* doctores);
    static void mostrarDuenosConMascotas(ContenedoraDueno* duenos, ContenedoraMascotas* mascotas);
    static void mostrarPacientesPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);
};