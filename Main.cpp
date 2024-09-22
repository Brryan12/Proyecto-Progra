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

	ContenedoraMascotas* cm = new ContenedoraMascotas(5);
	Dueno* d = new Dueno("Juan Perez", "1111");
	Dueno* d2 = new Dueno("Maria Perez", "2222");
	Mascota* m = new Mascota("Firulais", "Perro", d);
	Mascota* m2 = new Mascota("Firulais", "Perro", d2);
	cm->agregarMascota(m);
	cm->agregarMascota(m2);
	cout << "Ingrese la cedula: " << endl;
	string cedula;
	cin >> cedula;
	cout << cm->toString(cedula) << endl;



	delete d;
	delete d2;
	delete cm;
	return 0;
}



