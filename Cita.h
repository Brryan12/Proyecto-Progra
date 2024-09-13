#pragma once
#include <iostream>
#include <sstream>
class Cita
{
private:
	std::string dia;
	std::string hora;

public:
	Cita(std::string dia, std::string hora);
	virtual ~Cita();
};

