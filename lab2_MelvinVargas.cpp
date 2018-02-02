#include <iostream>
using namespace std;


//funcion menu lee y valida la entrada.
int menu();

//Main
int main(){
	int op=0;
	while(op!=4){
		switch(menu()){
			case 1:
				break;
			case 2:
				break;
		    case 3:
				break;
			case 4:
				break;
		}
	}
	return 0;
}



//funcion del menu
int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu***********"<<endl;
		cout<<"1.Sucesion de numeros triangulares"<<endl;
		cout<<"2.Area y grados de un triangulo"<<endl;
	    cout<<"3.Numeros de Catalan"<<endl;
		cout<<"4.Salir del programa"<<endl;
		cout<<"Ingrese numero de opcion que desea evaluar: ";
		cin>> num;
	}
	return num;
}
