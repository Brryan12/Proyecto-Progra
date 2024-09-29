#pragma once
#include "Dueno.h"
class ContenedoraDueno
{
private:
	Dueno** duenos;
	int cant;
	int tam;
public:

	/// @brief contructor de la clase ContenedoraDueno
	/// @param tam tamaño del vector de duenos
	ContenedoraDueno(int tam);

	/// @brief destructor default de la clase ContenedoraDueno
	~ContenedoraDueno();

	/// @brief consigue un dueno mediante su cedula
	/// @return la cantidad de duenos
	int getCant();

	/// @brief consigue un dueno mediante la posicion en el vector
	/// @param pos la posicion en la que esta en el vector
	/// @return nullptr si no encontro ningun dueno y un objeto dueno si lo encontro
	Dueno* getDuenoPos(int pos);

	/// @brief consigue un dueno mediante su cedula
	/// @param cedula la cedula del dueno a buscar
	/// @return nullptr si no encontro ningun dueno y un objeto dueno si lo encontro
	Dueno* getDueno(string cedula);

	/// @brief revisa si el dueno existe
	/// @param cedula la cedula del dueno a buscar
	/// @return true si el dueno existe, false si no existe
	bool existeDueno(string cedula);

	/// @brief agrega un dueno al vector de duenos
	/// @param dueno es el dueno a agregar
	/// @return true si se agrego, false si no se agrego
	bool agregarDueno(Dueno* dueno);

	/// @brief metodo que muestra todos los duenos
	/// @return retona un string con todos los duenos
	string toString() const;
};

