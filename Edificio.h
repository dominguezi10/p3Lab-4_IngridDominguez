#include <string>
using namespace std;

#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edidicio{
	private:
		// atributos
		int personas;
		int pisos;

	public:
		Edificio(int,int);
		Edificio();

		// mutadores
		void setPersonas(int);
		int getPersonas();

		void setPisos(int);
		int getPisos();


	//destructor
	~CARRO();
};

#endif
