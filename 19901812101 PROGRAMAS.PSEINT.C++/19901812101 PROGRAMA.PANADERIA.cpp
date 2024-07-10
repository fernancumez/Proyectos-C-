//Programa Panaderia

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

void cubilete();
void pirujo();
void salir();

int cantidad[2],menu=0;

void cubilete(){
	system("color 02");
	cout<<"\nINGREDIENTES PARA LA PREPARACION DE CUBILETES\n";
	cout<<"40 GRAMOS DE HARINA\n";	
	cout<<"1/2 CUCHARADITA DE LEVADURA\n";
	cout<<"1 HUEVO\n";
	cout<<"\nINGRESE LA CANTIDAD DE CUBILETES A PREPARAR\n";
	cin>>cantidad[1];
	cout<<"\nENTONCES NECESITARA:\n";
	cout<<40*cantidad[1]<< "CUCHARADAS DE HARINA\n";
	cout<<0.5*cantidad[1]<< " CUCHARADAS DE LEVADURA\n";
	cout<<1*cantidad[1]<< "HUEVOS\n";
	system("pause");
}

void pirujo(){
	system("color 03");
	cout<<"\nINGREDIENTES PARA PREPARAR PIRUJO\n";
	cout<<"40 GRAMOS DE HARINA\n";
	cout<<"1 CUCHARADA DE LEVADURA\n";
	cout<<"1/2 HUEVO\n";
	cout<<"1/2 TAZA DE AGUA\n";
	cout<<"1 GRAMO DE SAL\n";
	cout<<"3 GRAMOS DE ROYAL\n";
	cout<<"\nINGRESE LA CANTIDAD DE PIRUJO A PREPARA\n";
	cin>>cantidad[2];
	cout<<"\nENTONCES NECESITARA:\n";
	cout<<50*cantidad[2]<<" GRAMOS DE HARINA\n";
	cout<<1*cantidad[2]<<" CUCHARADAS DE LEVADURA\n";
	cout<<0.5*cantidad[2]<<" HUEVOS";
	cout<<0.5*cantidad[2]<<" TAZAS DE AGUA<<\n";
	cout<<1*cantidad[2]<<" GRAMOS DE SAL\n";
	cout<<3*cantidad[2]<<" GRAMOS DE ROYAL\n";
	system("pause");	
}

void salir(){
	system("color ");
	cout<<"\nEsperamos que vuelva pronto\n";
	system("pause");	
}

int main(){
	do{
		system("cls");
		cout<<"\n\t\t*****BIENVENIDOS*****\n";
		cout<<"\t\tRECETAS DE PANADERIA\n";
		cout<<"\nRecetas disponibles\n";
		cout<<"1. Cubiletes\n";
		cout<<"2. Pirujo\n";
		cout<<"3. Salir\n";
		cin>>menu;
		switch(menu)
		{
			case 1:
				cubilete();
				break;
			case 2:
				pirujo();
				break;
			case 3:
				salir();
				break;		
			default:
				cout<<"\nIngreso Invalido\n";
				system("pause");
				break;	
		}
	}while(menu!=3);
	return 0;
}
