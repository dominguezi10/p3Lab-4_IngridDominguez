#include "Parqueo.h";
#include <iostream>
#include <string>
using namespace std;

Parqueo::Parqueo(int pPisos, int pCapacidad){
	this->cantidadPisos  = pPisos;
	this->capacidad = capacidad;

}

Paqueo:: Parqueo(){
	this->cantidadPisos = 2;
	this->capacidad = 5;

}

int Parqueo::getCantidadPisos(){
	return cantidadPisos;

}

int Parqueo::getCapacidad(){
	return capacidad;
}

void Parqueo:: setCantidadPisos(int cantidad){
	this->cantidadPisos = cantidad;

}

void Parqueo:: setCapacidad(int capacidadNueva){
	this->capacidad = capacidadNueva;

}


