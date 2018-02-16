#include <iostream>
#include <string>
#include <vector>  
using namespace std;

//Prototipos de los metodos.

//Menu principal del programa.
int menu();

int main(){
	int opcion =1;

	while (opcion>=1 && opcion<= 3){
		opcion = menu();
		switch(opcion){
			case 1:{//
				cout<<"Usted selecciono: "<<endl;
			//	int matrix[5][5];
				vector<string> data;
				data.push_back("my name");
				data.push_back("laudia");
				data.push_back("claudia 3");
				for(int i=0;i<data.size();i++){
				cout <<data[i]<<endl;
				}
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
