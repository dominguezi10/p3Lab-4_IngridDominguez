#include "Carro.h"
#include <iostream>
#include <string>
using namespace std;

Carro::Carro(int altura, string color, string marca){
	this->altura = altura;
	this->color = color;
	this->marca = marca;

}

Carro::Carro(){
	this->altura = 1;
	this->color = "Azul";
	this->marca = "Toyota";
}

int Carro:: getAltura(){
	return altura;

}


string Carro:: getColor(){
	return color;
}

string Carro:: getMarca(){
	return marca;
}

void Carro:: setAltura(int alturaNueva){
	this->altura = alturaNueva;
}

void Carro:: setColor(string colorNuevo){
	this-> color = colorNuevo;
}

void Carro:: setMarca(string marcaNueva){
	this->marca = marcaNueva;
}







