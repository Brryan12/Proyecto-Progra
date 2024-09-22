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
	Dueno* Jean = new Dueno("Jean", "2084");
	Dueno* Michael= new Dueno("Michael", "3234");
	Dueno* Jimmy = new Dueno("Jimmy", "6464");

	Mascota* mascota1 = new Mascota("Firulais", "Perro", Jean);
	Mascota* mascota2 = new Mascota("Michi", "Gato", Michael);
	Mascota* mascota3 = new Mascota("Piolin", "Pajaro", Jimmy);

	ContenedoraMascotas* contenedoraMascotas = new ContenedoraMascotas(3);
	contenedoraMascotas->agregarMascota(mascota1);
	contenedoraMascotas->agregarMascota(mascota2);
	contenedoraMascotas->agregarMascota(mascota3);
	cout << contenedoraMascotas->toString() << endl;



	return 0;
}



