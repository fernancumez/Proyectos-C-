
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<windows.h>
#include<locale.h>

using namespace std;

string placa;
int entrada[4],salida[4],menu[2],vehiculos=1,contador;

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void registro();
void consulta();

void registro(){
	do{
		if(vehiculos==10){
			system("cls");
			cout<<"\nHA LLEGADO A LIMITE DE INGRESO DE DATOS";
			cout<<"\nVUELVA A INTENTAR DESPUES";
		}
		else{
			system("cls");
			cout<<"\nREGISTRO DE DATOS";
			cout<<"\nVEHICULO "<<vehiculos;
			cout<<"\n\nINGRESE EL NUMERO DE PLACA: ";cin>>placa;
			cout<<"INGRESE LA HORA DE ENTRADA: ";cin>>entrada[contador];
			cout<<"INGRESE LA HORA DE SALIDA: ";cin>>salida[contador];
			cout<<"\nDATOS INGRESADOS CORRECTAMENTE...";
			cout<<"\n\nDESEA INGRESAR OTRO VEHICULO";
			cout<<"\n1.SI  2.NO";cin>>menu[2];
			vehiculos=vehiculos+1;
		}
		cout<<"\n";
		system("pause");
	}while(menu[2]!=2);
}

void consulta(){
	system("cls");
	cout<<"\nCONSULTA DE DATOS";
	for(contador=0;contador<10;contador++){
		cout<<"\nVEHICULO "<<vehiculos;
		cout<<"\nHORA ENTRADA: "<<entrada[contador-1];
		cout<<"\nHORA SALIDA:  "<<salida[contador-1];
		vehiculos=vehiculos+1;
	}
	cout<<
	system("pause");
}

int main(){
	do{
		setlocale(LC_ALL, "spanish");
		system("cls");
		system("color f0"); 
		cout<<"\n\t\tCONTROL DE ESTACIONAMIENTO";
		cout<<"\n\n\n1. INGRESO DE DATOS";
		cout<<"\n2. CONSULTA DE DATOS";
		cout<<"\n3. SALIR";
		cout<<"\n\nINGRESE LA OPCION: ";cin>>menu[1];
		switch(menu[1]){
			case 1:
				registro();
				break;
			case 2:
				consulta();
				break;		
			case 3:
				cout<<"\nGRACIAS POR SU VISITA...";
				cout<<"\n";
				system("pause");	
				break;
			default:
				cout<<"\nVALOR INGRESADO NO VALIDO";
				break;	
		}
	}while(menu[1]!=3);
}
