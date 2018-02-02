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
//funcion para verificar si el triangulo es rectangulo.
void rectangulo(int,int,int);
//funcion para calcular numero triangular previo.
void triangularprevio(int);

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
				triangular(num1);
				cout<<endl;
				triangularprevio(num2);
				cout<<endl;
				triangular(numran);
				cout<<endl;
				break;
			case 2:
				double ladoa;
				double ladob;
				double ladoc;
				double anguloa;
				double angulob;
				double anguloc;
				double areatriangulo;
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
				anguloa=acos((pow(ladob,2.0)+(pow(ladoc,2.0)-pow(ladoa,2.0)))/(2.0*ladob*ladoc))*180.0/PI;
				angulob=acos((pow(ladoa,2.0)+(pow(ladoc,2.0)-pow(ladob,2.0)))/(2.0*ladoa*ladoc))*180.0/PI;
				anguloc=180.0-anguloa-angulob;
				cout<<"El angulo de alfa es: "<<anguloa<<endl;
				cout<<"El angulo de beta es: "<<angulob<<endl;
				cout<<"El angulo de gamma: "<<anguloc<<endl;
				rectangulo(anguloa,angulob,anguloc);	
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
//funcion para verificar si es triangulo rectangulo.
void rectangulo(int alfa,int beta,int gamma){
	if(alfa==90||beta==90||gamma==90){
		cout<<"El triangulo es rectangulo."<<endl;
	}else{
		cout<<"EL triangulo no es rectangulo";
	}
}
//Funcion para calcular el triangular.
void triangular(int num){
	int acumulador=0;
	for(int i=1;i<=num;i++){
		acumulador=acumulador+i;
		if(acumulador==num){
		cout<<"El numero "<<num<<" es Triangular"<<endl;
			break;
		}
	}
	if(acumulador!=num){
		cout<<"El numero "<<num<<" no es Triangular"<<endl;
	}
}
//funcion para calcular el triangular previo
void triangularprevio(int num){
	int acumulador=0;
	for(int i=1;i<=num;i++){
		acumulador=acumulador+i;
		if(acumulador==num){
			cout<<"El numero "<<num<<" es Triangular previo"<<endl;
			break;
		}
	}
	if(acumulador!=num){
		triangularprevio(num-1);
	}
}

