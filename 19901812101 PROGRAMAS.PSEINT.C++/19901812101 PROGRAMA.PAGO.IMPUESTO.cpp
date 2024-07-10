//Programa pago impuesto

#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

main(){
	
	char nit[10],placa[10];
	string nombre;
	int modelo;
	float pago1,pago2;
	
	system("color 02");
	cout<<endl;
	cout<<"\t      *******BIENVENIDOS*******\n";
	cout<<"\t \t Pago de Impuestos\n    "<<endl;
	cout<<"Ingres su NIT\n";
	cin>>nit;
	cout<<"Ingrese su Nombre\n";
	cin>>nombre;
	cout<<"Ingrese el No. de Placa\n";
	cin>>placa;
	cout<<"Ingrese el modelo de su vehiculo\n";
	cin>>modelo;
	
	pago1=150.00;
	pago2=200.00;
	
	if(modelo>=1980){
		cout<<endl;
		cout<<"Su impuesto es: "<<endl;
	}
	else{
		if(modelo>=1981 && modelo<=2000){
		cout<<endl;
		cout<<"El pago del impuesto es: "<<pago1<<endl;
		}
		else{
			cout<<endl;
			cout<<"El pago es: "<<pago2<<endl;
		}	
	}
}

