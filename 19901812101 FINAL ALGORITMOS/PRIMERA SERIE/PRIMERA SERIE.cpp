 
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<windows.h>
#include<locale.h>

using namespace std;

void galletas();
void empacado();
void embotellado();
void consulta();
void jugo();

int menu[4],unidad[2],tipo=0,unidades,unitario[2],totalunitario[2];
int cantidad[2],tiempo=0,totalunidad[2],totalgramos[2],totalcantidad[2];
int kilo[2],gramo[2],consulta1,totaltiempo=0;
float costototal=0,tiempototal=0,horasgall=0; 
int gallempacar=0, proceso=0,totalgalle=0,costogeneral=0;
float costounitario, promediodeempaque; 
int jugo1,natural,artificial,produccion[2],dia,mes,anio;
float prodmel,prodfrut;
string lugar,arrandono;

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void jugo(){
	do{
		system("cls");
		cout<<"\n\tJUGO";
		cout<<"\n\t1. NATURAL";
		cout<<"\n\t2. ARTIFICIAL";
		cout<<"\n\t3. MENU PRINCIPAL";
		cout<<"\n\n\tINGRESE UNA OPCION: ";cin>>jugo1;
		switch(jugo1){
			case 1:
				cout<<"\n\t\tSUBMENU NATURAL";
				cout<<"\n\t\t1. MELOCOTON";
				cout<<"\n\t\t2. FRUTAS";
				cout<<"\n\n\t\tINGRESE UNA OPCION: ";cin>>natural;
				switch(natural){
					case 1:
						cout<<"\n\t\tMELOCOTON";
						cout<<"\n\t\tINGRESE LA CANTIDAD DE UNIDADES DE PRODUCCION: ";cin>>produccion[1];
						if(produccion[1]<240){
							cout<<"\n\t\tDEBE SOLICITAR UNA CANTIDAD MAYOR A 240";
							cout<<"\n\t\tINTENTE DE NUEVO";
						}
						else{
							cout<<"\n\t\tEL COSTO DE PRODUCCION ES: 1.50";
							prodmel=produccion[1]*1.50;
							cout<<"\n\t\tEL COSTO TOTAL DE PRODUCCION ES: "<<prodmel;
						}
						break;
					case 2:
						cout<<"\n\t\tFRUTAS";
						cout<<"\n\t\tINGRESE LA CANTIDAD DE UNIDADES DE PRODUCCION: ";cin>>produccion[2];
						if(produccion[2]<180){
							cout<<"\n\t\tDEBE SOLICITAR UNA CANTIDAD MAYOR A 180";
							cout<<"\n\t\tINTENTE DE NUEVO";
						}
						else{
							cout<<"\n\t\tEL COSTO DE PRODUCCION ES: 1.90";
							prodfrut=produccion[2]*1.90;
							cout<<"\n\t\tEL COSTO TOTAL DE PRODUCCION ES: "<<prodfrut;
						}
						break;
					case 3:
						break;
					default:
						cout<<"\n\t\tVALOR INGRESADO NO VALIDO";
						break;
				}
				cout<<"\n\t\t";
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"\n\t\tSUBMENU ARTIFICIAL";
				cout<<"\n\t\t1. ARANDONO";
				cout<<"\n\t\t2. KIWI";
				cout<<"\n\n\t\tINGRESE UNA OPCION: ";cin>>artificial;
				switch(artificial){
					case 1:
						cout<<"\n\t\t\tARRANDONO";
						cout<<"\n\t\t\tINGRESE EL LUGAR A DESTINO: ";cin>>lugar;
						if(lugar=="Peten" || lugar=="peten" || lugar=="Quiche" || lugar=="quiche" || lugar=="Zacapa" || lugar=="zacapa"){
							cout<<"\n\t\t\tLUGAR NO DISPONIBLE";
							cout<<"\n\t\t\t";
							system("pause");
						}
						else{
							cout<<"\n\t\t\tINGRESE LA CANTIDAD QUE DESEE(LATAS): ";cin>>arrandono;
							cout<<"\n\t\t\tDATOS GUARDADOS CORRECTAMENTE";
							cout<<"\n\t\t\t";
							system("pause");
						}
						break;
					case 2:
						cout<<"\n\t\t\tKIWI";
						cout<<"\n\t\t\tINGRESE LA FECHA DE PRODUCCION(EJ. 1/6/2018)";
						cout<<"\n\t\t\tDIA: ";cin>>dia;
						cout<<"\t\t\tMES: ";cin>>mes;
						cout<<"\t\t\tAÑO: ";cin>>anio;
						cout<<"\n\t\t\tLA FECHA DE VENCIMIENTO ES: "<<dia<<"/"<<mes<<"/"<<anio;
						cout<<"\n\t\t\t";
						system("pause");
						break;
					default:
						cout<<"\n\t\tVALOR INGRESADO NO VALIDO";
						cout<<"\n\t\t";
						system("pause");
						break;
				}
				system("cls");
				break;
			case 3:
				cout<<"\n\tREDIRECCIONANDO AL MENU PRINCIPAL...";
				cout<<"\n\t";
				system("pause");
				break;
			default:
				cout<<"\n\tVALOR INGRESADO NO VALIDO";
				cout<<"\n\t";
				system("pause");
				break;	
		}
	}while(jugo1!=3);
}

void galletas(){
	system("cls");
	cout<<"\n\t---------------------------------------------------------";
	cout<<"\n\t\t\tGALLETAS";
	cout<<"\n\n\tINGRESE LA CANTIDAD DE GALLETAS A EMPACAR: ";cin>>gallempacar;
	gallempacar=gallempacar+totalgalle;
	cout<<"\n\tCOSTO UNITARIO DE EMPAQUE: Q.";cin>>costounitario;
	costototal=gallempacar*costounitario;
	costototal=costototal+costogeneral;
	cout<<"\n\tPROMEDIO DE PAQUETES EMPACADOS POR HORA: ";cin>>promediodeempaque;
	tiempototal=((60/promediodeempaque)*(gallempacar))/60;
	do{
		cout<<"\n\t---------------------------------------------------------\n";
		cout<<"\n\n\tDESEA VER EL PROCESO...";
		cout<<"\n\t1.SI	2.NO ";
		cout<<"\n\n\tINGRESE LA OPCION: ";cin>>proceso;
		switch(proceso){
			case 1:
				cout<<"\n\t---------------------------------------------------------";
				cout<<"\n\t\t\t";
				cout<<"\n\tEL COSTO TOTAL DE PRODUCCION ES: "<<costototal<<" Quetzales";
				horasgall=tiempototal*60;
				cout<<"\n\n\tEL TIEMPO ESTIMADO DE PRODUCCION ES: "<<horasgall;cout<<" Minutos\t"<<tiempototal; cout<<" Horas";
				cout<<"\n\t---------------------------------------------------------\n\t";
				system("pause");
				break;	
			case 2:	
				cout<<"\n\tSALIENDO DEL PROGRAMA...\n\t";
				system("pause");
				break;
			default:
				cout<<"\n\tVALOR INGRESADO NO VALIDO\n\t";
				system("pause");
				system("cls");
				break;
		}
		totalgalle=gallempacar;
		costogeneral=costototal;
	}while(proceso!=1 && proceso!=2);
}


void empacado(){
	do{
		system("cls");
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tEMPACADO";
		cout<<"\n\t1. GALLETAS";
		cout<<"\n\t2. GRANOS BASICOS";
		cout<<"\n\t3. MENU PRINCIPAL";
		cout<<"\n\t4. SALIR DEL PROGRAMA";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\n\tINGRESE LA OPCION: "; cin>>menu[2];	
		if(menu[2]>0 && menu[2]<5){
			if(menu[2]==1){
				galletas();
			}
			else{
				if(menu[2]==2){
					cout<<"\n\t\tGRANOS BASICOS";
					cout<<"\n\t\tTIPO DE GRANO";
					cout<<"\n\t\t1. AZUCAR";
					cout<<"\n\t\t2. MAIZ";
					cout<<"\n\n\t\tINGRESE LA OPCION: ";cin>>menu[4];
					switch(menu[4]){
						case 1: 
							cout<<"\n\t\tAZUCAR";
							cout<<"\n\t\tPESO TOTAL A EMPACAR(Kg): ";cin>>kilo[1];
							kilo[1]=kilo[1]*1000;
							unidad[1]=kilo[1]/400;
							cout<<"\n\t\tUNIDADES EMPACADAS: "<<unidad[1];
							unidad[1]=unidad[1]+totalunidad[1];
							gramo[1]=kilo[1]%400;
							cout<<"\n\t\tGRAMOS SOBRANTES SIN EMPACAR: "<<gramo[1];
							gramo[1]=gramo[1]+totalgramos[1];
							totalunidad[1]=unidad[1];
							totalgramos[1]=gramo[1];
							break;
						case 2:
							cout<<"\n\t\tMAIZ";
							cout<<"\n\t\tPESO TOTAL A EMPACAR(Kg): ";cin>>kilo[2];
							kilo[2]=kilo[2]*1000;
							unidad[2]=kilo[2]/250;
							cout<<"\n\t\tUNIDADES EMPACADAS: "<<unidad[2];
							unidad[2]=unidad[2]+totalunidad[2];
							gramo[2]=kilo[2]%250;
							cout<<"\n\t\tGRAMOS SOBRANTES SIN EMPACAR: "<<gramo[2];
							gramo[2]=gramo[2]+totalgramos[2];
							totalunidad[2]=unidad[2];
							totalgramos[2]=gramo[2];
							break;
						default:
							cout<<"\n\t\tVALOR INGRESADO NO VALIDO";
							break;
					}
					cout<<"\n\t\t";
					system("pause");
					system("cls");
				}
				else{
					if(menu[2]==3){
						cout<<"\n\tREDIRECCIONANDO AL MENU PRINCIPAL...";
					}
					else{
						if(menu[2]==4){
							cout<<"\n\tSALIENDO DEL PROGRAMA...";
						}
					}
				}
			}
		}
		else{
			cout<<"\n\tVALOR INGRESADO NO VALIDO";
		}
	}while(menu[2]!=3 && menu[2]!=4);
}

void embotellado(){
	do{
		system("cls");
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tEMBOTELLADO";
		cout<<"\n\t1. AGUA";
		cout<<"\n\t2. jUGO";
		cout<<"\n\t3. MENU PRINCIPAL";
		cout<<"\n\t4. SALIR DEL PROGRAMA";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\n\tINGRESE LA OPCION: "; cin>>menu[3];
		if(menu[3]>0 && menu[3]<5){
			if(menu[3]==1){
				system("cls");
				cout<<"\n\t\t\tAGUA";
				cout<<"\n\t------------------------------------------"; 
				cout<<"\n\tINGRESOS";
				cout<<"\n\t--------------------------------------";
				cout<<"\n\tTIEMPO DE HORAS DE LINEA DE PRODUCCION: ";cin>>tiempo;
				tiempo=tiempo+totaltiempo;
				totaltiempo=tiempo;
				do{
				    system("cls");
			    	cout<<"\n\tELIJA EL TIPO DE BOTELLA";
					cout<<"\n\t1. 300 ml.";
					cout<<"\n\t2. 650 ml.";
					cout<<"\n\n\tINGRESE LA OPCION: ";cin>>tipo;
					switch(tipo){
						case 1:
						   system("cls");
						   cout<<"\n\t\t\tRESULTADO";
						   cout<<"\n\t--------------------------------------------";
						   unitario[1]=tiempo*250;
						   cout<<"\n\tUNIDADES POR HORA DE 300 ml:              "<<unitario[1];
						   unitario[1]=unitario[1]+totalunitario[1];
						   cout<<"\n\t--------------------------------------------";
						   cantidad[1]=tiempo*250*300;
						   cout<<"\n\tCANTIDAD TOTAL DE AGUA EMBOTELLADA EN ml: "<<cantidad[1];
						   cantidad[1]=cantidad[1]+totalcantidad[1];
						   cout<<"\n\t--------------------------------------------";
						   cout<<"\n\t";
						   totalunitario[1]=unitario[1];
						   totalcantidad[1]=cantidad[1];
						   system("pause");
						   break;
						case 2:
						    system("cls");
						    cout<<"\n\t\t\tRESULTADO";
							cout<<"\n\t--------------------------------------------";
							unitario[2]=tiempo*175;
							cout<<"\n\tUNIDADES POR HORA DE 650 ml:              "<<unitario[2];
							unitario[2]=unitario[2]+totalunitario[2];
							cout<<"\n\t--------------------------------------------";
							cantidad[2]=tiempo*175*650;
							cout<<"\n\tCANTIDAD TOTAL DE AGUA EMBOTELLADA EN ml: "<<cantidad[2]; 
							cantidad[2]=cantidad[2]+totalcantidad[2];
							cout<<"\n\t--------------------------------------------";
							cout<<"\n\t";
							totalunitario[2]=unitario[2];
						    totalcantidad[2]=cantidad[2];
						    system("pause");
							break;
					    default:
							cout<<"\n\tVALOR INGRESADO NO VALIDO";
						    cout<<"\n\t"; 
						    system("pause");
							break;
					}
			    }while(tipo!=1 && tipo!=2);	 
			}
			else{
				if(menu[3]==2){
					jugo();	
				}
				else{
					if(menu[3]==3){
						cout<<"\n\tREDIRECCIONANDO AL MENU PRINCIPAL...";
					}
					else{
						if(menu[3]==4){
							cout<<"\n\tSALIENDO DEL PROGRAMA...";
						}
					}
				}
			}
		}
		else{
			cout<<"\n\tVALOR INGRESADO NO VALIDO";
			cout<<"\n\t";
			system("pause");
		}
	}while(menu[3]!=3 && menu[3]!=4 && jugo1!=3);
}

void consulta(){
	do{
		system("cls");
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tCONSULTA DE INFORMACION";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\t1. EMPACADO";
		cout<<"\n\t2. EMBOTELLADO";
		cout<<"\n\n\tINGRESE LA OPCION: ";cin>>consulta1;
		switch(consulta1){
			case 1:
				system("cls");
				cout<<"\n\t--------------------------------\n";
				cout<<"\n\tEMPACADO";
				cout<<"\n\t GALLETAS";
				cout<<"\n\t\tUNIDADES DE GALLETAS EMPACADAS:           "<<totalgalle;
				cout<<"\n\t\tCOSTO TOTAL DE PRODUCCION:                "<<costogeneral;
				cout<<"\n\n\t GRANOS BASICOS";
				cout<<"\n\t\tUNIDADES DE AZUCAR EMPACADOS:             "<<totalunidad[1];
				cout<<"\n\t\tGRAMOS DE AZUCAR SOBRANTES SIN EMPACAR:   "<<totalgramos[1];
				cout<<"\n\t\tUNIDADES DE MAIZ EMPACADOS:               "<<totalunidad[2];
				cout<<"\n\t\tGRAMOS DE MAIZ SOBRANTES SIN EMPACAR:     "<<totalgramos[2];
				cout<<"\n\t--------------------------------\n";
				cout<<"\n\t"; 
				break;
			case 2:
				system("cls");
				cout<<"\n\t--------------------------------\n";
				cout<<"\n\tEMBOTELLADO";
				cout<<"\n\tAGUA";
				cout<<"\n\n\tTIEMPO DE HORAS DE LINEA DE PRODUCCION:            "<<totaltiempo;
				cout<<"\n\t1. 300 ml.";
				cout<<"\n\t\tUNIDADES POR HORA DE 300 ml:               "<<totalunitario[1];
				cout<<"\n\t\tCANTIDAD TOTAL DE AGUA EMBOTELLADA EN ml:  "<<totalcantidad[1];
				cout<<"\n\t2. 650 ml.";
				cout<<"\n\t\tUNIDADES POR HORA DE 650 ml:               "<<totalunitario[2];
				cout<<"\n\t\tCANTIDAD TOTAL DE AGUA EMBOTELLADA EN ml:  "<<totalcantidad[2]; 
				cout<<"\n\n\tJUGO";
				cout<<"\n\tNATURAL";
				cout<<"\n\t\t1. MELOCOTON";
				cout<<"\n\t\tCANTIDAD DE UNIDADES DE PRODUCCION:        "<<produccion[1];
				cout<<"\n\t\tEL COSTO TOTAL DE PRODUCCION ES:           "<<prodmel;
				cout<<"\n\t\t2. FRUTAS";
				cout<<"\n\t\tCANTIDAD DE UNIDADES DE PRODUCCION:        "<<produccion[2];
				cout<<"\n\t\tEL COSTO TOTAL DE PRODUCCION ES:           "<<prodfrut;
				cout<<"\n\tARTIFICIAL";
				cout<<"\n\t\t1. ARRANDANO";
				cout<<"\n\t\tLUGAR A DESTINO:                           "<<lugar;
				cout<<"\n\t\t2. KIWI";
				cout<<"\n\t\tLA FECHA DE VENCIMIENTO ES:                "<<dia<<"/"<<mes<<"/"<<anio;
				cout<<"\n\t--------------------------------\n";	
				cout<<"\n\t"; 
				break;
			default:
				cout<<"\n\tVALOR INGRESADO NO VALIDO";
				cout<<"\n\t"; 
				system("pause");
				break;
		}	
	}while(consulta1!=1 && consulta1!=2);
	
}

int main(){ 
	do{
		setlocale(LC_ALL, "spanish");
		system("cls");
		system("color f0"); 
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\tCONTROL DE PRODUCCIÓN";
		cout<<"\n\n\t1. EMPACADO";
		cout<<"\n\t2. EMBOTELLADO";
		cout<<"\n\t3. CONSULTA DE INFORMACION";
		cout<<"\n\t4. SALIR DEL PROGRAMA";
		cout<<"\n\t--------------------------------\n";
		cout<<"\n\n\tINGRESE LA OPCION: "; cin>>menu[1];
		switch(menu[1]){
			case 1:
				empacado();
				break;
			case 2:
				embotellado();
				break;
			case 3:
				consulta();
				break;
			case 4:
				cout<<"\n\tSALIENDO DEL PROGRAMA...";
				break;		
			default:
				cout<<"\n\tVALOR INGRESADO NO VALIDO";
				break;
		}
		cout<<"\n\t"; 
		system("pause");
	}while(menu[1]!=4 && menu[2]!=4 && menu[3]!=4);

	return 0;
}
