//PROGRAMA JUEGOS MECANICOS

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

main(){
	
	int punteoarcade,punteopractica,punteoreloj;
	int niveles,pantallas,tiempo;
	int seleccion,calculo;
	
	punteoarcade=0;
	punteopractica=0;
	punteoreloj=0;
	
	do{
		system("cls");
		system("color 02");
		cout<<endl;
		cout<<"\t      *******BIENVENIDOS*******\n";
		cout<<"\t \t Juegos Mecanicos\n    "<<endl;
		cout<<"1. Arcade\n";
		cout<<"2. Practica\n";
		cout<<"3. Contra Reloj\n";
		cout<<"4. Registro de Token\n";
		cout<<"5. Salir\n";
		cin>>seleccion;
		switch(seleccion){
			system("color 03");
			case 1: //ARCADE
				cout<<endl;
				cout<<"INSTRUCCIONES ARCADE\n";
				cout<<"Por cada nivel ganado obtienes 40 Tokens\n";
				cout<<"Ingrese el numero de niveles ganados:\n";
				calculo=niveles*40;
				cout<<"Ha ganado "<<calculo<<" Tokens en modo arcade"<<endl;
				punteoarcade=punteoarcade+calculo; 
				getch();
				break;
			case 2:	//PRACTICA	
				cout<<endl;
				cout<<"INSTRUCCIONES PRACTICA DE JUEGO\n";
				cout<<"Por cada pantalla de practica obtienes 10 Tokens\n";
				cout<<"Ingrese el numero de pantallas practicadas:\n";
				cin>>pantallas;
				calculo=pantallas+10;
				cout<<"Ha ganado "<<calculo<<" Tokens en modo practica\n";
				punteopractica=punteopractica+calculo;
				getch();
				break;
			case 3:
				cout<<endl;
				cout<<"INSTRUCCIONES MODO DE JUEGO CONTRA RELOJ\n";
				cout<<"Por cada 20 segundos de supervivencia obtiene 25 Tokens\n";
				cout<<"Ingrese la cantidad de segundos de supervivencia:\n";
				cin>>tiempo;
				calculo=(tiempo/20)*25;
				cout<<"Ha ganado "<<calculo<<" Tokens en modo Contra Relor\n ";
				getch();
				break;
			case 4:
				cout<<endl;
				cout<<"Rlecord de Tokens\n";
				cout<<"En modo Arcade: "<<punteoarcade<<endl;
				cout<<"Modo Practica: "<<punteopractica<<endl;
				cout<<"Modo Contra Reloj"<<punteoreloj<<endl;
				cout<<"Total de Tokens: "<<punteoarcade+punteopractica+punteoreloj;
				getch();
				break;
			case 5:
				cout<<endl;
				cout<<"Gracias por su visita";
				getch();	
			default:
				cout<<endl;
				cout<<"Ingrese una opcion valida";	
				getch();
				break;	
		}
		cout<<endl;
		cout<<"Presione una tecla para continuar...";
		getch();
	}while(seleccion!=5);	
}
