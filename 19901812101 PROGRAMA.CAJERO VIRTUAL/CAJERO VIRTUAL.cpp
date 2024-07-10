
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<windows.h>
#include<locale.h>

using namespace std;

string password[5],email[5],confirmail[5],confirmpass[5];
string name[5],sexo[5],dia[5],mes[5],anio[5];
int saldo_inicial=0,opcion,edad[5];
float saldo=0,retiro=0,agregar=0;
int menu=0,sub=0,cuenta=0,tras=0,fact[3];
char caracter, caracter2, caracter3;

void intro();
void enter();
void session();
void body();
    
void intro(){
	system("cls");
	cout<<"\n\t\tCAJERO VIRTUAL 5B\n";
	cout<<"\n\t--------------------------------\n";
	cout<<"\n\tSERVICIO MONETARIO ELECTRONICO\n";
	cout<<"\t1. Registrarse\n";
	cout<<"\t2. Iniciar sesion\n";
	cout<<"\t3. Salir\n";
	cout<<"\t--------------------------------\n";
	cout<<"\n\tIntroduzca opcion: ";cin>>menu;
}

void enter(){
	do{
		cout<<"\n\tREGISTRATE CON TU DIRECCION DE EMAIL\n";
		cout<<"\tEmail: ";cin>>email[1];
		cout<<"\tConfirmar email: ";cin>>confirmail[1];
		if(email[1]==confirmail[1]){
			do{
				cout<<"\tContraseña: ";
				//cin>>password[1];
		
				caracter= getch();
					
					password[1]="";
					
					while (caracter != 13 && caracter != 27){
						
						if (caracter != 8) {
							password[1].push_back(caracter);
							cout<<"*";
						}
						else{
							if (password[1].length() > 0 ){
								cout << "\b \b";
								password[1] = password[1].substr(0,password[1].length() - 1);
							}
						}
						
						caracter = getch();
					}
				
				
				
				cout<<"\n\tConfirmar contraseña: ";
				//cin>>confirmpass[1];
				
				
				caracter2= getch();
					
					confirmpass[1]="";
					
					while (caracter2 != 13 && caracter2 != 127){
						
						if (caracter2 != 8) {
							confirmpass[1].push_back(caracter2);
							cout<<"*";
						}else{
						if (confirmpass[1].length() > 0 ){
							cout << "\b \b";
							confirmpass[1] = confirmpass[1].substr(0,confirmpass[1].length() - 1);
						}
						}		
						caracter2 = getch();
					}
				
				
				
				if(password[1]==confirmpass[1]){
					cout<<"\n\tNombre usuario: ";cin>>name[1];
					cout<<"\tGenero: ";cin>>sexo[1];
					cout<<"\tEdad: ";cin>>edad[1];
					cout<<"\tFecha de nacimiento:\n";
					cout<<"\tDia: ";cin>>dia[1];
					cout<<"\tMes: ";cin>>mes[1];
					cout<<"\tAño: ";cin>>anio[1];
					system("cls");
					cout<<"\n\tCREADO CUENTA :D";
					Sleep(1000);
					cout<<"\n\tCONECTANDO CON EL SERVIDOR........";
					Sleep(1000);
					cout<<"\n\tALMACENANDO INFORMACION EN LA NUBE.........";
					Sleep(1000);
					cout<<"\n\tOBTENIENDO IP DEL USUARIO...........";
					Sleep(1000);
					cout<<"\n\tTODO LISTO...INICIANDO SESSION....\n";
					Sleep(1000);
				}
				else{
					cout<<"\n\tLa contraseña no coincide\n";
					cout<<"\tVuelva a introducir la contraseña\n";
				}
			}while(confirmpass[1]!=password[1]);
		}
		else{
			cout<<"\n\tLa direccion email no coincide\n";
			cout<<"\tVuelva a introducir el correo elecronico\n";
		}
		cout<<"\t";
		system("pause");
		system("cls");
	}while(confirmail[1]!=email[1]);
}	

void session(){
	do{
		cout<<"\n\tINICIAR SESION\n";
		cout<<"\tEmail: ";cin>>email[2];
		if(email[2]==email[1]){
			do{
				cout<<"\tContraseña: ";
				//cin>>password[2];
				
				
				caracter3= getch();
					
					password[2]="";
					
					while (caracter3 != 13 && caracter3 != 127){
						
						if (caracter3 != 8) {
							password[2].push_back(caracter3);
							cout<<"*";
						}else{
						if (password[2].length() > 0 ){
							cout << "\b \b";
							password[2] = password[2].substr(0,password[2].length() - 1);
						}
						}		
						caracter3 = getch();
					}
				if(password[2]==password[1]){
					system("cls");
					cout<<"\n\tINICIANDO SESSION :D\n";
					Sleep(1000);
					cout<<"\tCONECTANDO CON EL SERVIDOR......\n";	
					Sleep(1000);
					cout<<"\n\tALMACENANDO INFORMACION EN LA NUBE.........";
					Sleep(1000);
					cout<<"\n\tOBTENIENDO IP DEL USUARIO...........";
					Sleep(1000);
					cout<<"\n\tTODO LISTO...INICIANDO SESSION....\n";
					Sleep(1000);
				}
				else{
					cout<<"\n\tContraseña incorrecta\n";
					cout<<"\tVuelva a introducir la contraseña\n";
				}
				system("pause");
				system("cls");	
			}while(password[1]!=password[2]);	
		}
		else{
			cout<<"\n\tCorreo electronico incorrecto\n";
			cout<<"\tPor favor vuelva a ingresar su correo\n";
		}
		cout<<"\t";
		system("pause");
		system("cls");
	}while(email[2]!=email[1]);
}
	
void body(){
	do{
		cout<<"\n\tBIENVENIDO A SU CAJERO VIRTUAL";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tDigite la opcion de su preferencia";
		cout<<"\n\t1. Depositos monetarios";
		cout<<"\n\t2. Retiros monetarios";
		cout<<"\n\t3. Realizar transferencia";
		cout<<"\n\t4. Estado de la cuenta";
		cout<<"\n\t5. Cerrar Session\n";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tIntroduzca opcion: ";cin>>opcion;
		switch(opcion){
			case 1: 
				cout<<"\n\tDigite la cantidad que desea ingresar: ";
				cin>>agregar;
				agregar=agregar+saldo;
				cout<<"\tEl saldo actual es: "<<agregar<<"Q";
				saldo=agregar;
				cout<< "\n\n\tDesea imrpimir Recibo: 1.SI  2.NO ";
				cin>>fact[1];
				if(fact[1]==1){
					cout<<"\n\t\tImprimiendo Recibo..Por favor espere";
					cout<<"\n\t\tQuedan 3 segundos";
					Sleep(1000);
					cout<<"\n\t\tQuedan 2 segundos";
					Sleep(1000);
					cout<<"\n\t\tQuedan 1 segundos";
					Sleep(1000);
					cout<<"\n-------LISTO...GRACIAS POR USAR NUESTROS SERVICIOS-------\n";
					getch();
				}
				break;
			case 2:
				cout<<"\n\tDigite la cantidad que desea retirar: ";
				cin>>retiro;
				if(retiro<=saldo){
					cout<<"\n\tSe ha retirado "<<retiro<<" de tu saldo";
					retiro=agregar-retiro;
					cout<<"\n\tEl saldo actual es de: "<<retiro<<"Q";
					agregar=retiro;
					saldo=retiro;
					cout<< "\n\n\tDesea imrpimir Recibo: 1.SI  2.NO ";
					cin>>fact[2];
					if(fact[2]==1){
						cout<<"\n\t\tImprimiendo Recibo..Por favor espere";
						cout<<"\n\t\tQuedan 3 segundos";
						Sleep(1000);
						cout<<"\n\t\tQuedan 2 segundos";
						Sleep(1000);
						cout<<"\n\t\tQuedan 1 segundos";
						Sleep(1000);
						cout<<"\n-------LISTO...GRACIAS POR USAR NUESTROS SERVICIOS-------\n";
						getch();
					}
				}
				else{
					cout<<"\tLa cantidad solicitada es mayor al saldo";
					cout<<"\n\tHaga un deposito monetario a su cuenta";
					retiro=0;
				}
				break;
			case 3:
				tras=saldo;
				cout<<"\n\tIngrese el numero de cuenta a transferir: ";cin>>cuenta;
				cout<<"\n\tIngrese la cantidad que desea trasferir: ";cin>>tras;
				if(tras<=saldo){
					cout<<"\n\tSe ha trasferido "<<tras<<"Q de tu saldo a la cuenta N'"<<cuenta;
					tras=saldo-tras;
					cout<<"\n\tTu saldo actual es: "<<tras<<"Q";
					saldo=tras;
					cout<<"\n\n\tDesea imrpimir Recibo: 1.SI  2.NO";
					cin>>fact[3];
					if(fact[3]==1){
						cout<<"\n\t\tImprimiendo Recibo..Por favor espere";
						cout<<"\n\t\tQuedan 3 segundos";
						Sleep(1000);
						cout<<"\n\t\tQuedan 2 segundos";
						Sleep(1000);
						cout<<"\n\t\tQuedan 1 segundos";
						Sleep(1000);
						cout<<"\n-------LISTO...GRACIAS POR USAR NUESTROS SERVICIOS-------\n";
						getch();
					}
				}
				else{
					cout<<"\n\tLa cantidad solicitada es mayor al saldo existente";
					cout<<"\n\tHaga un deposito monetario a su cuenta\n";
					tras=0;
				}
				break;
			case 4:
				cout<<"\tSaldo de la cuenta: "<<saldo<<"Q"<<endl;
				break;
			case 5:
				cout<<"\n\tCerrando Session.....\n";
				break;
			default: 
				cout<<"\n\tValor ingresado no valido\n";	
				break;	
		}
		cout<<"\t";
		system("pause");
		system("cls");
	}while(opcion!=5);
}


int main(){
	setlocale(LC_ALL, "spanish");
	system("color f0"); 
	do{
		intro();
		if(menu>0 && menu<4){
			if(menu==1){
				enter();
				body();	
			}
			else{
				if(menu==2){
					session();
					body();
				}
				else{
					if(menu==3){
						cout<<"\n\tGracias por confiar en nosotros\n";
					}
				}
			}
		}
		else{
		cout<<"\n\tVALOR INGRESADO NO VALIDO\n1";
		cout<<"\t";
		system("pause");
		}
	}while(menu!=3);

	return 0;
}
