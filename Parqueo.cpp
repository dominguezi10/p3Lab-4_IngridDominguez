#include "Parqueo.h"
#include <iostream>
#include <string>
#include "Carro.h"
using namespace std;

Parqueo::Parqueo(int pPisos, int personas, int altura){
	this->cantidadPisos  = pPisos;
	
	this->altura = altura;
	
        int capacidad = 0;
        z = pPisos;
        n = personas /10;
        if(n <12){
                m = n * 0.7;
        }else{
                m = n * 0.4;
        }

        capacidad  = n *m;

	this->capacidad = capacidad;
	
	matriz3D = new Carro***[n];
	for(int i = 0; i<n; i++){
	 	matriz3D[i] = new Carro**[m];
		for(int j= 0; j<m; j++){
			matriz3D[i][j] = new Carro*[pPisos];
			for(int k =0; k<pPisos; k++){
				matriz3D[i][j][k] = NULL;
			}
		}

	}	// fin de los tres for
	
}

Parqueo:: Parqueo(){
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

int Parqueo:: getAltura(){
	return altura;
}

void Parqueo:: setAltura(int alturaNueva){
	this->altura = alturaNueva;
}


Parqueo :: ~Parqueo(){
	for(int i =0; i!= n; i++ ){
		for(int j = 0; j!= m; j++){
			for(int k =0; k !=z; k++){
				matriz3D[i][j][k] = NULL;
				delete  matriz3D[i][j][k];
			}
			delete[] matriz3D[i][j]; 
		}
		delete[] matriz3D[i];
	}

	delete[] matriz3D;
}

void Parqueo:: parquearCarro(int piso, Carro* carro){
	int condicion = 0;
	for(int i= 0; i<n ; i++){
		for(int j= 0; j<m ; j++){
			if(matriz3D[i][j][piso] == NULL){		
				matriz3D[i][j][piso] = carro;
				cout<< "entro "<< endl;
				condicion  = 2;
				break;

			}
			
		}
		if(condicion == 2){	
			break;		
		}
	}


	/*for(int i= 0; i<n ; i++){
		for(int j= 0; j<m ; j++){
			if(matriz3D[i][j][piso] != NULL){
				cout<< "entro "<< endl;
			}
		}
	}*/
	cout<< "Carro Parqueado!!"<< endl;
}
