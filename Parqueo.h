#include <string>
#include "Carro.h"
using namespace std;

#ifndef PARQUEO_H
#define PARQUEO_H

class Parqueo{
	private:
		// atributos
		int cantidadPisos;
		int capacidad;
		int altura;

	public:
		int n;
		int m;
		int z;
		Carro**** matriz3D;
		Parqueo(int, int, int);
		Parqueo();

		// mutadores
		void setCantidadPisos(int);
		int getCantidadPisos();

		void setCapacidad(int);
		int getCapacidad();

		void setAltura(int);
		int getAltura();

		void setMatriz3D(Carro);
		int getMatriz3D();

		void parquearCarro(int, Carro*);
		void listarParqueo();
	//destructor
	~Parqueo();
};

#endif
