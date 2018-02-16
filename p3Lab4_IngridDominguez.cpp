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

//crear carro
Carro* crearCarro(int);

//parquear
void parquear(Parqueo, Carro*);

int main(){
	int personas=250;
	int pisos =0;
	while(pisos <= 0){
		cout<< "Bienvenido!! "<< endl<< "Ingrese la cantidad de pisos para el edificio : ";
		cin>> pisos;
	}
	
	while(personas >200 || personas <50){
		cout <<"Ingrese cantidad personas por pisos [50,200] :  ";
		cin>>personas;
	}
	
	

	int altura = 0;
	while(altura <= 0){
		cout<< "Ingrese la altura maxima del edificio : "<< endl;
		cin>> altura;
	}

	cout<< pisos << " "<< personas << " " << altura << " " << endl;

	//creacio del parqueo
	Parqueo parqueo(pisos, personas, altura);		
	cout<< parqueo.getCantidadPisos()<< endl;	

	int opcion =1;
	int condicion = 1;
	Carro* temporal;	

	cout<< endl<<  "*********************" <<endl;
	while (opcion>=1 && opcion<= 3){
		opcion = menu();
		switch(opcion){
			case 1:{
				temporal = crearCarro(altura);
				
				cout<< "Carro Creado"<< endl;
				condicion =2;
				break;
				}
			case 2:{
				cout<<"Usted selecciono:2 "<<endl;
				if(condicion == 1){	
					cout<< "Tiene que crear un carro! "<< endl;
				}else{
					parquear(parqueo, temporal);
					condicion = 1;
				}
				break;
				}

			case 3:{
				cout<<"Usted selecciono: 3"<<endl;
					parqueo.listarParqueo();
				break;
				}
		}// fin del switch	
	
	}// fin

	cout<< "Salio"<< endl; 
	return 0;
}


//crear carro
Carro* crearCarro(int alturaEdificio){
	
	int altura = alturaEdificio+1;
        string color = "";
        string marca = "";
	
	
        cout<<endl << "*********************" << endl;
        cout<< "Ingrese su color:";
	cin >> color;
	cout<< "Ingrese su marca: ";
	cin >> marca;
	
	while(altura > alturaEdificio){	
		cout<< "Ingrese la altura del carro NO mayor a "<< alturaEdificio  << ":";
		cin>>  altura;
		
	}// fin de qhie
	

	//creamos el carro 
	Carro* carro = new Carro(altura, color, marca);
	return carro;
}


//parquear
void parquear(Parqueo parqueo, Carro* carro){
	cout<< "Parquear Carro" << endl;
	int piso = 0;
	cout<< "Ingrese el piso en que desea parquear :";
	cin >> piso;

	parqueo.parquearCarro(piso, carro);

}


//menu
int menu(){
	int opcion = 0;
	while(opcion<=0||opcion>4){
		cout<<"Bienvenido!! "<<endl<<"Ingrese su opcion:  "<<endl;
		cout <<"1-Crear Carro"<<endl<<"2-Parquear"<<endl<<"3-Listar"<<endl<<"4-Salir"<<endl;
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
