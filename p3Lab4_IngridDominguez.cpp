#include <iostream>
#include "Parqueo.h"
#include "Carro.h"
#include <string>
#include <vector> 
#include <typeinfo>
using namespace std;

//prototipos de los metodos para liberar memoria
void liberarMatriz(int**&, int);

//metodo para liberar a memoria de string
void liberarMatrizString(string**&, int);

//menu principal del programa.
int menu();

int main(){
	int personas=250;
	int pisos =0;
	while(pisos <= 0){
		cout<< "Bienvenido!! "<< endl<< "Ingrese la cantidad de pisos para el edificio : ";
		cin>> pisos;
	}
	
	while(personas >200 || personas <50){
		cout <<"Ingrese cantidad personas [50,200] :  ";
		cin>>personas;
	}
	
	cout<< pisos << "" <<personas << endl;
	
	
	
	int opcion =1;

	while (opcion>=1 && opcion<= 3){
		opcion = menu();
		switch(opcion){
			case 1:{//
				cout<<"Usted selecciono: 1"<<endl;
				break;
				}
			case 2:{
				cout<<"Usted selecciono:2 "<<endl;

				break;
				}

			case 3:{
				cout<<"Usted selecciono: 3"<<endl;

				break;
				}
		}// fin del switch	
	
	}// fin

	cout<< "Salio"<< endl;
	return 0;
}


//menu
int menu(){
	int opcion = 0;
	while(opcion<=0||opcion>4){
		cout<<"Bienvenido!! "<<endl<<"Ingrese su opcion:  "<<endl;
		cout <<"1-"<<endl<<"2-"<<endl<<"3-"<<endl<<"4-"<<endl;
		cin>>opcion;
	}
	return opcion;
}//Fin del metodo del Menu.



//liberar memoria
void liberarMatriz(int**& matriz, int size){
        for(int i= 0; i<size; i++){
                delete[] matriz[i];
                matriz[i] = NULL;
        }

        delete[] matriz;
        matriz = NULL;

        cout<< "Espacio liberado"<< endl;
}

void liberarMatrizString(string**& matriz, int size){
        for(int i = 0; i< size; i++){
                delete[] matriz[i];
                matriz[i] = NULL;
        }

        delete[] matriz;
        matriz = NULL;

        cout<< "liberado memoria tablero "<< endl;
}
