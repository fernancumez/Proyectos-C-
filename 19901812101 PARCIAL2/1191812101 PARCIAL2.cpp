//pROGRAMA CERAMKCA

#include <conio.h>
#include <iostream>

using namespace std;

main()
{
	int menu1=0,menu2=0,rep=0;
	
	system("color 02");
	cout<<"UNIVERSIDAD MARIANO GALVEZ\n";
	cout<<"Curso: Algoritmos\n";
	cout<<"SEGUNDO PARCIAL\n";
	cout<<"Nombre: Luis Fernando Cumez Quina\n";
	cout<<"Carnet: 1990-18-12101\n";
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"Presione una tecla para continuar...";
	getch();
	
	do
	{
		system("cls");
		system("color b");
		cout<<"MENU DE OPCIONES\n";
		cout<<"1. CERAMICA\n";
		cout<<"2. HIERRO FORJAD\n";
		cout<<"3. CARPINTERIA\n";
		cout<<"4. CERERIA\n";
		cout<<"5. TEXTILES\n";
		cout<<"6. SALIR\n";
		cout<<endl;
		cout<<"SELECCIONE UNA OPCION\n";
		cin>>menu2;
		
		switch(menu2)
		{
			case 1:
				system("cls");
				cout<<"";
				break;
				
			case 2:
				system("cls");
				system("color 02");
				cout<<"Opcion HIERRO FORJADO no disponible\n";
				break;
				
			case 3:
				system("cls");
				system("color 02");
				cout<<"Opcion CARPINTERIA no disponible\n";
				break;
				
			case 4:
				system("cls");
				system("color 02");
				cout<<"CERERIA S.A.\n";
			    cout<<"\t- Materiales para velas\n";
			    cout<<"\t- Moldes para velas\n";
			    cout<<"\t- Velas para toda ocasion\n";    
			    cout<<"\t- Utensilios de mesa de loza y china\n";  
			    cout<<"\t- Figuras decorativas religiosas y de ocasi¾n\n";    
				cout<<"\t- Pedidos al 9988776655\n";
				break;
				
			case 5:
				system("cls");
				system("color 02");
				cout<<"TEXTILES DE GUATEMALA\n";
				cout<<"Guatemala es reconocida mundialmente por sus tejidos coloridos de gran calidad y riqueza.\n";
				cout<<"Para su elaboracion se siguen usando antiguas tÚcnicas:\n";
				cout<<"\t- Telar de cintura\n";
				cout<<"\t- Telar de pie\n";
				cout<<"\t- Telar de pedal\n";
				break;	
		}	
		cout<<endl;
		cout<<"\n Desea continuar? \n";	
		cout<<"1.Si \n2.No \n ";
		cin>>rep;
	}while(rep==1);
	
	
	
	
}

			
			

