#include "Interfaz.h"


class Interfaz {
public:
    static int menuPrincipal();
    static int menuAdministracion();
Static int menuControlCitas() ;
Static int menuBusquedaYListados() ;
    static int getTamEspecialidades();
    static ContenedoraEspecialidades* crearContenedoraEspecialidades(int tam);
    static int getTamDoctores();
    static ContenedoraDoctores* crearContenedoraDoctores(int tam);
    static int getTamDuenos();
    static ContenedoraDueno* crearContenedoraDuenos(int tam);
    static int getTamMascotas();
    static ContenedoraMascotas* crearContenedoraMascotas(int tam);

    static void agregarEspecialidades(ContenedoraEspecialidades* especialidades);
    static void agregarDoctor(ContenedoraDoctores* doctores, ContenedoraEspecialidades* especialidades);
    static void agregarDueno(ContenedoraDueno* duenos);
    static void agregarMascota(ContenedoraMascotas* mascotas, ContenedoraDueno* duenos);
    static void sacarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas, ContenedoraEspecialidades* especialidades);
    static void cancelarCita(Agenda* agenda, ContenedoraDoctores* doctores, ContenedoraMascotas* mascotas);
    static void mostrarCalendarioPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);
    static void mostrarCitasPorDueno(Agenda* agenda, ContenedoraMascotas* mascotas);
    static void mostrarListadoEspecialidades(ContenedoraEspecialidades* especialidades);
    static void mostrarDoctoresPorEspecialidad(ContenedoraEspecialidades* especialidades, ContenedoraDoctores* doctores);
    static void mostrarDuenosConMascotas(ContenedoraDueno* duenos, ContenedoraMascotas* mascotas);
    static void mostrarPacientesPorDoctor(Agenda* agenda, ContenedoraDoctores* doctores);
};