//PROGRAMA PAGO MENSUALIDAD

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
main()
{
	char estudiante[10],padre[10],madre[10];
	string GuiaA,GuiaB,GuiaC;
	int seccion1=0,seccion2=0,seccion3=0,seccion4=0,seccion5=0,grado=0,ciclo=0;
	float Profesor_Kevin=0,Profesor_Rony=0,Profesora_Flor=0;
	float PagoA,PagoB,PagoC;
	float PagoA1,PagoB1,PagoC1,PagoBach,PagoBach1;
	
	PagoA=75.00;
	PagoB=85.00;
	PagoC=90.00;
	PagoBach1= 100.00;
	Profesora_Flor=15.00;
	Profesor_Kevin=10.00;
	Profesor_Rony=0.00;
	GuiaA="Profesora Flor";
	GuiaB="Profesor Kevin";
	GuiaC="Profesor Rony";
	
	system("color 02");
	cout<<endl;
	cout<<"\t      *******BIENVENIDOS*******\n";
	cout<<"\t \t Pago de mensualidad\n    ";
	cout<<endl;
	cout<<"Ingrese el nombre del estudiante\n";
	cin>>estudiante;
	cout<<"Ingrese el nombre del padre\n";
	cin>>padre;
	cout<<"Ingrese el nombre de la madre\n";
	cin>>madre;
	cout<<"Ingrese el Ciclo Escolar:\n ";
	cin>>ciclo;
	
	system("cls");
	system("color 03");
	cout<<"Elija el Grado Escolar\n";
	cout<<"1. Primero Basico\n";
	cout<<"2. Segundo Basico\n";
	cout<<"3. Tercero Basico\n";
	cout<<"4. Cuarto Bachillerato\n";
	cout<<"5. Quinto Bachillerato\n";
	cout<<"6. Salir\n";
	cin>>grado;
	switch(grado){
		case 1:
			system("cls");
			system("color 05");
			cout<<endl;
			cout<<"Primer Grado\n";
			cout<<"Elija la seccion\n";
			cout<<"1. Primero A\n";
			cout<<"2. Primero B\n";
			cout<<"3. Primero C\n";
			cin>>seccion1;
			if(seccion1>0 && seccion1<4){
				if(seccion1==1){
				cout<<endl;
					cout<<"*****Primero A*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaA<<endl;
					PagoA1==PagoA-Profesora_Flor;
					cout<<"*Cuota a Pagar: "<<PagoA1<<endl;
					cout<<"*Ciclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";		
				}
				if(seccion1==2){
					cout<<endl;
					cout<<"*****Primero B*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaB<<endl;
					PagoB1==PagoB-Profesor_Kevin;
					cout<<"*Cuota a Pagar: "<<PagoB1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				if(seccion1==3){
					cout<<endl;
					cout<<"*****Primero C*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaC<<endl;
					PagoC1==PagoC-Profesor_Rony;
					cout<<"*Cuota a Pagar: "<<PagoC1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
			}
			else{
				cout<<"***Valor ingresado no valido***";
			}
			getch();
			break;
		case 2:
			system("cls");
			system("color 05");
			cout<<endl;
			cout<<"Segundo Grado\n";
			cout<<"Elija la seccion\n";
			cout<<"1. Segundo A\n";
			cout<<"2. Segundo B\n";
			cout<<"3. Segundo C\n";
			cin>>seccion2;
			if(seccion2>0 && seccion2<4){
				if(seccion2==1){
					cout<<endl;
					cout<<"*****Segundo A*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaA<<endl;
					PagoA1==PagoA-Profesora_Flor;
					cout<<"*Cuota a Pagar: "<<PagoA1<<endl;
					cout<<"*Ciclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";		
				}
				if(seccion2==2){
					cout<<endl;
					cout<<"*****Segundo B*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaB<<endl;
					PagoB1==PagoB-Profesor_Kevin;
					cout<<"*Monto a Pagar: "<<PagoB1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				if(seccion2==3){
					cout<<endl;
					cout<<"*****Primero C*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaC<<endl;
					PagoC1==PagoC-Profesor_Rony;
					cout<<"*Cuota a Pagar: "<<PagoC1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes sonar, lo puedes lograr***";
				}
			}
			else{
				cout<<"***Valor ingresado no valido***";
			}
			getch();
			break;
						
		case 3:
			system("cls");
			system("color 05");
			cout<<endl;
			cout<<"Tercer Grado\n";
			cout<<"Elija la seccion\n";
			cout<<"1. Tercero A\n";
			cout<<"2. Tercero B\n";
			cout<<"3. Tercero C\n";
			cin>>seccion3;
			if((seccion3>0) && (seccion3<3)){
				if(seccion3==1){
					cout<<endl;
					cout<<"*****Tercero A*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaA<<endl;
					PagoA1==PagoA-Profesora_Flor;
					cout<<"*Cuota a Pagar: "<<PagoA1<<endl;
					cout<<"*Ciclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";		
				}
				if(seccion3==2){
					cout<<endl;
					cout<<"*****Tercero B*****\n";
					cout<<"*Padres:\n "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaB<<endl;
					PagoB1==PagoB-Profesor_Kevin;
					cout<<"*Cuota a Pagar: "<<PagoB1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				if(seccion3==3){
					cout<<endl;
					cout<<"*****Tercero C*****\n";
					cout<<"*Padres:\n "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaC<<endl;
					PagoC1==PagoC-Profesor_Rony;
					cout<<"*Cuota a Pagar: "<<PagoC1<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				else{
					cout<<"***Valor ingresado no valido***";
				}	
			}
			getch();
			break;
		case 4:
			system("cls");
			system("color 05");
			cout<<endl;
			cout<<"Cuarto Bachillerato\n";
			cout<<"Elija la seccion\n";
			cout<<"1. Cuarto Computacion\n";
			cout<<"2. Cuarto Electricidad\n";
			cout<<"3. Cuarto Mecanica\n";
			cin>>seccion4;
			if(seccion4>0 && seccion4<4){
				if(seccion4==1){
					cout<<endl;
					cout<<"*****Cuato Computacion*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaA<<endl;
					PagoBach==PagoBach1-Profesora_Flor;
					cout<<"*Cuota a Pagar: "<<PagoBach<<endl;
					cout<<"*Ciclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";		
				}
				if(seccion4==2){
					cout<<endl;
					cout<<"*****Cuarto Electricidad*****\n";
					cout<<"*Padres: "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaB<<endl;
					PagoBach==PagoBach1-Profesor_Kevin;
					cout<<"*Cuota a Pagar: "<<PagoBach<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				if(seccion4==3){
					cout<<endl;
					cout<<"*****Cuarto Mecanica*****\n";
					cout<<"*Padres:\n "<<padre<<" y "<<madre<<endl;
					cout<<"*Estudiante: "<<estudiante<<endl;
					cout<<"*Profesor(a) guia: "<<GuiaC<<endl;
					PagoBach==PagoBach1-Profesor_Rony;
					cout<<"*Cuota a Pagar: "<<PagoBach<<endl;
					cout<<"*Cilclo Escolar: "<<ciclo<<endl;
					cout<<"***Si lo puedes soñar, lo puedes lograr***";
				}
				else{
					cout<<"***Valor ingresado no valido***";
				}
			}
			getch();
			break;	
	}
}
