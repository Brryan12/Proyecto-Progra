#include "ContenedoraCitas.h"

ContenedoraCitas::ContenedoraCitas(int tam)
{
    this->tam = tam;
    this->cant = 0;
    this->vec = new Cita * [tam];

}

ContenedoraCitas::~ContenedoraCitas()
{
}

bool ContenedoraCitas::ingresarCita(Dueno& dueno, Doctor &doc)
{

    return false;
}
