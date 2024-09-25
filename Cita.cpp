#include "Cita.h"

Cita::Cita( string dia,  string hora)
{
	this->dia = dia;
	this->hora = hora;
}

Cita::~Cita()
{
}

 string Cita::getDia()
{
	return dia;
}

 string Cita::getHora()
{
	return hora;
}

void Cita::setDia()
{
	this->dia = dia;
}

void Cita::setHora()
{
	this->hora = hora;
}

 string Cita::toString()
{
	 stringstream s;
	s << "Dia: " << dia << " - Hora: " << hora <<  endl;
	return s.str();
}






/*
#include "Cita.h"
#include "Due�o.h"
#include "Doctor.h"
#include "Mascota.h"


Cita::Cita(){

}



Cita::Cita(Due�o* d, Mascota* m, Doctor* doc, string day, string h) {
	dia = day;
	hora = h;
	due�o = d;
	mascota = m;
	doctor = doc;
}

Cita::~Cita() {


}
string Cita::getDia() {
	return dia;
}

void Cita::setDia(string day) {
	dia = day;
}

string Cita::getHora() {
	return hora;
}

void Cita::setHora(string h) {
	hora = h;
}

void Cita::sacarCita() {
	string cedula = "";
	cout << "Ingrese su numero de identificacion: " << endl;
	cin>>cedula;
	if (due�o->getCedula() == cedula)
		cout << "Sus mascotas son las siguientes: " << endl;
}

void Cita::cancelCita() {

}

string Cita::mostrarCitaDoc() {

}

string mostrarCitaDue() {

}



*/
