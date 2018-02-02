#include <iostream>
#include <cstdlib>
#include <math.h>
# define PI 3.14159265
using namespace std;


//funcion menu lee y valida la entrada.
int menu();

//funcion para ver si un numero es triangular.
void triangular(int);

//funcion para generar un numero aleatorio.
int aleatorio();

//funcion para calcular el area de un triangulo.
int area(int,int,int);


//Main
int main(){
	int op=0;
	while(op!=4){
		switch(op=menu()){
			case 1:
				int num1;
				int numran;
				int num2;
				cout<<"Ingrese primer numero para calcular si es Triangular: ";
				cin>>num1;
				cout<<endl;
				numran=aleatorio();
				cout<<"Ingrese numero m para ver que triangular no lo supera: ";
				cin>>num2;
				cout<<endl;
				cout<<"El numero random es: "<<numran<<endl;
				break;
			case 2:
				int ladoa;
				int ladob;
				int ladoc;
				int anguloa;
				int anuglob;
				int anguloc;
				int areatriangulo;
				cout<<"Ingrese numero del lado a"<<endl;
				cin>>ladoa;
				cout<<"Ingrese numero del lado b"<<endl;
				cin>>ladob;
				cout<<"Ingrese numero del lado c"<<endl;
				cin>>ladoc;
				cout<<endl;
				areatriangulo=area(ladoa,ladob,ladoc);
				cout<<"El area de su triangulo es: "<<areatriangulo;
				cout<<endl;
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
		return num;
	}
	
}

//Funcion que genera el random.
int aleatorio(){
	int ran=0;
	ran=rand()% 100+1;
	return ran;
}
//Funcion para calcular el area de un triangulo.
int area(int ladoa,int ladob,int ladoc){
	int s;
	int area;
	s=(ladoa+ladob+ladoc)/2;
	area=sqrt(s*((s-ladoa)*(s-ladob)*(s-ladoc)));
					
	return area;
}	
//Funcion para calcular el triangular.
void triangular(int num){

}
