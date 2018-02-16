#include <string>
using namespace std;

#ifndef PARQUEO_H
#define PARQUEO_H

class Parqueo{
	private:
		// atributos
		int cantidadPisos;
		int capacidad;

	public:
		Parqueo(int, int);
		Parqueo();

		// mutadores
		void setCantidadPisos(int);
		int getCantidadPisos();

		void setCapacidad(int);
		int getCapacidad();

	//destructor
	~Parqueo();
};

#endif
