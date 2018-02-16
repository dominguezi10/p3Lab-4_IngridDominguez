#include <string>
using namespace std;

#ifndef CARRO_H
#define CARRO_H

class Carro{
	private:
		// atributos
		int altura;
		string color;
		string marca;

	public:
		Carro(int, string, string);
		Carro();

		// mutadores
		void setAltura();
		int getAltura();

		void setColor();
		int getColor();

		void setMarca();
		int getMarcar();

	//destructor
	~CARRO();
};

#endif
