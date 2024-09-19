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
	Mascota* mascota1 = new Mascota("Firulais", "Perro" );
	Mascota* mascota2 = new Mascota("Michi", "Gato");
	Mascota* mascota3 = new Mascota("Piolin", "Pajaro");
	ContenedoraMascotas* contenedoraMascotas = new ContenedoraMascotas(3);
	contenedoraMascotas->agregarMascota(mascota1);
	contenedoraMascotas->agregarMascota(mascota2);
	contenedoraMascotas->agregarMascota(mascota3);
	cout << contenedoraMascotas->toString() << endl;



	return 0;
}



