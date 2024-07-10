//Programa Libreria
//Empresa "Papeles S.A"

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int kraft1,empapelar1,envolver1,sulfurizado1,grasa1;
int afilgranado1,autoadhesivo1,bond1,carbon1,ecologico1;
string nombre[5],dpi[5],nit[5],direccion[5],telefono[5];
int usos,oficina,menu,resma[5],caja[5],totalresma[5];
int unidad[10],ciento[5],totalunidad[10],totalciento[5];
int totalcaja[5];

void productos();
void datos();
void kraft();
void empapelar();
void envolver();
void sulfurizado();
void grasa();
void factura();
void afilgranado();
void autoadhesivo();
void bond();
void carbon();
void ecologico();

void productos(){
	if(menu==1){
	system("cls");
	cout<<"\nPapel para usos varios\n";
	cout<<"Elija el tipo de papel que desea adquirir\n";
	cout<<"1. Papel Kraft\n";
	cout<<"2. Papel para empapelar\n";
	cout<<"3. Papel para envolver\n";
	cout<<"4. Papel Sulfurizado\n";
	cout<<"5. Papel resistente a la grasa\n";
	cout<<"6. Salir\n";
	cin>>usos;
}
	else{
		if(menu==2){
			system("cls");
			cout<<"\nPapel para usos de oficina\n";
			cout<<"Elija el tipo de papel que desea adquirir\n";
			cout<<"1. Papel Afilgranado\n";
			cout<<"2. Papel autoadhesivo\n";
			cout<<"3. Papel bond \n";
			cout<<"4. Papel carbon\n";
			cout<<"5. Papel ecologico\n";
			cout<<"6. Salir\n";
			cin>>usos;
		}
	}	
}

void datos(){
	cout<<"Ingrese su nombre\n";
	cin>>nombre[usos-1];
	cout<<"Ingrese su DPI\n";
	cin>>dpi[usos-1];
	cout<<"Ingrese su NIT\n";
	cin>>nit[usos-1];
	cout<<"Ingrese su Direccion\n";
	cin>>direccion[usos-1];
	cout<<"Ingrese su numero telefonico\n";
	cin>>telefono[usos-1];
}

void factura(){
	cout<<"\nEMPRESA PAPELES S.A\n";
	cout<<"Cliente: "<<nombre[usos-1]<<endl;
	cout<<"DPI: "<<dpi[usos-1]<<endl;
	cout<<"NIT: "<<nit[usos-1]<<endl;
	cout<<"DIRECCION: "<<direccion[usos-1]<<endl;
	cout<<"TELEFONO: "<<telefono[usos-1]<<endl;
	cout<<"\nDETALLE\n";
	cout<<"TIPO: "<<endl;
	cout<<"CANTIDAD: "<<endl;
	cout<<"TOTAL: "<<endl;
	system("pause");
}

void kraft(){
	system("cls");
	cout<<"\nElija la cantidad de Papel Kraft que necesite\n";
	cout<<"1. Unidad	2.Ciento\n";
	cin>>kraft1;
	if((kraft1>0)&&(kraft1<3)){
		if(kraft1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese las unidades de Kraft que necesite\n";
			cin>>unidad[kraft1];
			totalunidad[kraft1]=unidad[kraft1]*400;
			cout<<"El valor unitario del Kraft es: "<<totalunidad[kraft1]<<endl;
			
		}else{
			if(kraft1==2){
				cout<<"\nCIENTO\n";
				cout<<"Ingrese el ciento de Kraft que necesite\n";
				cin>>ciento[kraft1];
				totalciento[kraft1]=ciento[kraft1]*800;
				cout<<"El valor del ciento de Kraft es: "<<totalciento[kraft1]<<endl;
			}
		}
	}
	else{
		cout<<"\nValor ingresado Invalido";
		system("pause");
	}
}

void empapelar(){
	system("cls");
	cout<<"\nElija la cantidad de Papel para empapelar que ecesite\n";
	cout<<"1. Unidad	2.Ciento\n";
	cin>>empapelar1;
	if((empapelar1>0)&&(empapelar1<3)){
		if(empapelar1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese las unidades de Papel para empapelar que necesite\n";
			cin>>unidad[empapelar1];
			totalunidad[empapelar1]=unidad[empapelar1]*400;
			cout<<"El valor unitario del papel para empapelar es: "<<totalunidad[empapelar1]<<endl;
		}else{
			if(empapelar1==2){
				cout<<"\nCIENTO\n";
				cout<<"Ingrese el ciento de papel para empapela que necesite\n";
				cin>>ciento[empapelar1];
				totalciento[empapelar1]=ciento[empapelar1]*800;
				cout<<"El valor del ciento del papel para empapelar es: "<<totalciento[empapelar1]<<endl;
			}
		}
	}
	else{
		cout<<"\nValor ingresado Invalido";
		system("pause");
	}
}

void envolver(){
	system("cls");
	cout<<"\nElija la cantidad de Papel para envolver que ecesite\n";
	cout<<"1. Unidad	2.Ciento\n";
	cin>>envolver1;
	if((envolver1>0)&&(envolver1<3)){
		if(envolver1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese las unidades de Papel para envolver que necesite\n";
			cin>>unidad[envolver1];
			totalunidad[envolver1]=unidad[envolver1]*400;
			cout<<"El valor unitario del papel para envolver es: "<<totalunidad[envolver1]<<endl;	
		}else{
			if(empapelar1==2){
				cout<<"\nCIENTO\n";
				cout<<"Ingrese el ciento de papel para envolver que necesite\n";
				cin>>ciento[envolver1];
				totalciento[envolver1]=ciento[envolver1]*800;
				cout<<"El valor del ciento del papel para envolver es: "<<totalciento[empapelar1]<<endl;
			}
		}
	}
	else{
		cout<<"\nValor ingresado Invalido";
		system("pause");
	}
}

void sulfurizado(){
	system("cls");
	cout<<"\nElija la cantidad de Papel sulfurizado que ecesite\n";
	cout<<"1. Unidad	2.Ciento\n";
	cin>>sulfurizado1;
	if((sulfurizado1>0)&&(sulfurizado1<3)){
		if(envolver1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese las unidades de Papel sulfurizado que necesite\n";
			cin>>unidad[sulfurizado1];
			totalunidad[sulfurizado1]=unidad[sulfurizado1]*400;
			cout<<"El valor unitario del papel sulfurizado es: "<<totalunidad[sulfurizado1]<<endl;
			
		}else{
			if(sulfurizado1==2){
				cout<<"\nCIENTO\n";
				cout<<"Ingrese el ciento de papel sulfurizado que necesite\n";
				cin>>ciento[sulfurizado1];
				totalciento[sulfurizado1]=ciento[sulfurizado1]*800;
				cout<<"El valor del ciento del papel sulfurizado es: "<<totalciento[sulfurizado1]<<endl;
			}
		}
	}
	else{
		cout<<"\nValor ingresado Invalido";
		system("pause");
	}
}

void grasa(){
	system("cls");
	cout<<"\nElija la cantidad de Papel resistente a la grasa que ecesite\n";
	cout<<"1. Unidad	2.Ciento\n";
	cin>>grasa1;
	if((grasa1>0)&&(grasa1<3)){
		if(grasa1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese las unidades de Papel resistente a la grasa que necesite\n";
			cin>>unidad[grasa1];
			totalunidad[grasa1]=unidad[grasa1]*400;
			cout<<"El valor unitario del papel resistente a la grasa es: "<<totalunidad[grasa1]<<endl;
			
		}else{
			if(sulfurizado1==2){
				cout<<"\nCIENTO\n";
				cout<<"Ingrese el ciento de papel resistente a la grasa que necesite\n";
				cin>>ciento[grasa1];
				totalciento[grasa1]=ciento[grasa1]*800;
				cout<<"El valor del ciento del papel resistente a la grasa es: "<<totalciento[grasa1]<<endl;
			}
		}
	}
	else{
		cout<<"\nValor ingresado Invalido";
		system("pause");
	}	
}

void afilgranado(){
	system("cls");
	cout<<"\nElija la cantidad de Papel afilgranado que ecesite\n";
	cout<<"1. Unidad	2. Resma	3. Caja\n";
	cin>>afilgranado1;
	if((afilgranado1>0)&&(afilgranado1<4)){
		if(afilgranado1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese la cantidad papel afilgrando que necesite\n";
			cin>>unidad[afilgranado1];
			totalunidad[afilgranado1]=unidad[afilgranado1]*350;
			cout<<"El valor unitario solicitado es: "<<totalunidad[afilgranado1];
		}
		else{
			if(afilgranado1==2){
				cout<<"\nRESMA\n";
				cout<<"Ingrese la cantidad que necesite\n";
				cin>>resma[afilgranado1];
				totalresma[afilgranado1]=resma[afilgranado1]*460;
				cout<<"El valor en resma solicitado es: "<<totalresma[afilgranado1];
			}
			else{
				if(afilgranado1==3){
					cout<<"\nCAJA\n";
					cout<<"Ingrese la cantidad que necesite\n";
					cin>>caja[afilgranado1];
					totalcaja[afilgranado1]=caja[afilgranado1]*590;
					cout<<"El valor en caja solicitado es: "<<totalcaja[afilgranado1];
				}
			}
		}
	}	
}

void autoadhesivo(){
	system("cls");
	cout<<"\nElija la cantidad de Papel autoadhesivo que ecesite\n";
	cout<<"1. Unidad	2. Resma	3. Caja\n";
	cin>>autoadhesivo1;
	if((autoadhesivo1>0)&&(autoadhesivo1<4)){
		if(autoadhesivo1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese la cantidad de papel autoadhesivo que necesite\n";
			cin>>unidad[autoadhesivo1];
			totalunidad[autoadhesivo1]=unidad[autoadhesivo1]*450;
			cout<<"El valor unitario solicitado es: "<<totalunidad[autoadhesivo1];
		}
		else{
			if(autoadhesivo1==2){
				cout<<"\nRESMA\n";
				cout<<"Ingrese la cantidad que necesite\n";
				cin>>resma[autoadhesivo1];
				totalresma[autoadhesivo1]=resma[autoadhesivo1]*460;
				cout<<"El valor en resma solicitado es: "<<totalresma[autoadhesivo1];
			}
			else{
				if(autoadhesivo1==3){
					cout<<"\nCAJA\n";
					cout<<"Ingrese la cantidad que necesite\n";
					cin>>caja[autoadhesivo1];
					totalcaja[autoadhesivo1]=caja[autoadhesivo1]*590;
					cout<<"El valor en caja solicitado es: "<<totalcaja[autoadhesivo1];
				}
			}
		}
	}	
}

void bond(){
	system("cls");
	cout<<"\nElija la cantidad de Papel sulfurizado que ecesite\n";
	cout<<"1. Unidad	2. Resma	3. Caja\n";
	cin>>bond1;
	if((bond1>0)&&(bond1<4)){
		if(bond1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese la cantidad de papel bond que necesite\n";
			cin>>unidad[bond1];
			totalunidad[bond1]=unidad[bond1]*450;
			cout<<"El valor unitario solicitado es: "<<totalunidad[bond1];
		}
		else{
			if(bond1==2){
				cout<<"\nRESMA\n";
				cout<<"Ingrese la cantidad que necesite\n";
				cin>>resma[bond1];
				totalresma[bond1]=resma[bond1]*460;
				cout<<"El valor en resma solicitado es: "<<totalresma[bond1];
			}
			else{
				if(bond1==3){
					cout<<"\nCAJA\n";
					cout<<"Ingrese la cantidad que necesite\n";
					cin>>caja[bond1];
					totalcaja[bond1]=caja[bond1]*590;
					cout<<"El valor en caja solicitado es: "<<totalcaja[bond1];
				}
			}
		}
	}	
}

void carbon(){
	system("cls");
	cout<<"\nElija la cantidad de Papel sulfurizado que ecesite\n";
	cout<<"1. Unidad	2. Resma	3. Caja\n";
	cin>>carbon1;
	if((carbon1>0)&&(carbon1<4)){
		if(carbon1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese la cantidad de papel carbon que necesite\n";
			cin>>unidad[carbon1];
			totalunidad[carbon1]=unidad[carbon1]*450;
			cout<<"El valor unitario solicitado es: "<<totalunidad[carbon1];
		}
		else{
			if(carbon1==2){
				cout<<"\nRESMA\n";
				cout<<"Ingrese la cantidad que necesite\n";
				cin>>resma[carbon1];
				totalresma[carbon1]=resma[carbon1]*460;
				cout<<"El valor en resma solicitado es: "<<totalresma[carbon1];
			}
			else{
				if(carbon1==3){
					cout<<"\nCAJA\n";
					cout<<"Ingrese la cantidad que necesite\n";
					cin>>caja[carbon1];
					totalcaja[carbon1]=caja[carbon1]*590;
					cout<<"El valor en caja solicitado es: "<<totalcaja[carbon1];
				}
			}
		}
	}	
}	

void ecologico(){
	system("cls");
	cout<<"\nElija la cantidad de Papel sulfurizado que ecesite\n";
	cout<<"1. Unidad	2. Resma	3. Caja\n";
	cin>>ecologico1;
	if((ecologico1>0)&&(ecologico1<4)){
		if(ecologico1==1){
			cout<<"\nUNIDAD\n";
			cout<<"Ingrese la cantidad de papel ecologico que necesite\n";
			cin>>unidad[ecologico1];
			totalunidad[ecologico1]=unidad[ecologico1]*450;
			cout<<"El valor unitario solicitado es: "<<totalunidad[ecologico1];
		}
		else{
			if(ecologico1==2){
				cout<<"\nRESMA\n";
				cout<<"Ingrese la cantidad que necesite\n";
				cin>>resma[ecologico1];
				totalresma[ecologico1]=resma[ecologico1]*460;
				cout<<"El valor en resma solicitado es: "<<totalresma[ecologico1];
			}
			else{
				if(ecologico1==3){
					cout<<"\nCAJA\n";
					cout<<"Ingrese la cantidad que necesite\n";
					cin>>caja[ecologico1];
					totalcaja[ecologico1]=caja[ecologico1]*590;
					cout<<"El valor en caja solicitado es: "<<totalcaja[ecologico1];
				}
			}
		}
	}	
}

int main(){
	do{
		system("cls");
		cout<<"\n\t\tEmpresa de Papeles S.A\n";
		cout<<"\n\t\t\tBienvenidos\n";
		cout<<"\nProductos disponibles a distribuir\n";
		cout<<"1. Papel para usos varios\n";
		cout<<"2. Papel para oficina\n";
		cout<<"3. Salir\n";
		cin>>menu;
		switch(menu){
			case 1:
				do{
					productos();
					datos();
					switch(usos){
						case 1:
							cout<<"\nPAPEL KRAFT\n";
							kraft();
							break;
						case 2:
							cout<<"\nPAPEL PARA EMPAPELAR\n";
							empapelar();
							break;
						case 3:
							cout<<"\nPAPEL PARA ENVOLVER\n";
							envolver();
							break;
						case 4:
							cout<<"\nPAPEL SULFURIZADO\n";
							sulfurizado();
							break;
						case 5:
							cout<<"\nPAPEL RESISTENTE A LA GRASA\n";
							grasa();
							break;
						case 6:
							break;
						default:
						cout<<"\nValor ingresado Invalido\n";
						system("pause");
						break;		
					}
					factura();
				}while(usos!=6);
				break;
			case 2:
				do{
					productos();
					datos();
					switch(usos){
						case 1:
							afilgranado();
							break;
						case 2:
							autoadhesivo();
							break;
						case 3:
							bond();
							break;		
						case 4:
							carbon();
							break;
						case 5:
							ecologico();
							break;
						case 6:
							break;
						default:
						cout<<"\nValor ingresado Invalido\n";
						system("pause");
						break;
					}
					factura();
				}while(usos!=6);
				break;
			case 3:
				cout<<"\nGracias por su visita\n";
				system("pause");
				break;
			default:
				cout<<"\nValor ingresado Invalido\n";
				system("pause");
				break;				
		}
	}while(menu!=3);
	return 0;
}
