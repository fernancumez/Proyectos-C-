//PROGRAMA INVENTARIO

#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

main()
{
	string prod1, prod2, prod3, venta;
	string ventaProd;
	float costo1=0, costo2=0, costo3=0;
	float precio1=0, precio2=0, precio3=0;
	float precioventa=0;
	int cant1=0, cant2=0, cant3=0;
	int menu=0, rep=0,cantidadventa=0;

	cant1=0;
	cant2=0;
	cant3=0;
	
	do
	{
		system("color 07");
		system ("cls");
		cout<<endl;
		cout<<"\t \t \t *****BIENVENIDOS***** \n";
		cout<<"\t \t \t ***INVENTARIO UMG***\n";
		cout<<endl;
		cout<<"1. INGRESAR PRODUCTOS \n";
		cout<<"2. CONSULTAR DATOS DE PRODUCTOS \n";
		cout<<"3. REALIZAR VENTA DE PRODUCTOS \n";
		cin>> menu;
		
		switch (menu)
		{	
			case 1:
				system("color 02");
				cout<<"************************************************ \n";
				cout<<"Ingrese producto No.1: \n";
				cout<<"Nombre producto: \n";
				cin>> prod1 ;
				cout<<"Costo de compra \n";
				cin>> costo1 ;
				cout<<"Precio de Venta \n";
				cin>> precio1 ;
				cout<<"Cantidad de Existencias \n";
				cin>> cant1; 
				
				system("color 03");
				cout<<"************************************************ \n";
				cout<<"Ingrese producto No.2: \n";
				cout<<"Nombre producto: \n";
				cin>> prod2 ;
				cout<<"Costo de compra \n";
				cin>> costo2 ;
				cout<<"Precio de Venta \n";
				cin>> precio2 ;
				cout<<"Cantidad de Existencias \n";
				cin>> cant2;
				
				system("color 06");
				cout<<"************************************************ \n";
				cout<<"Ingrese producto No.3: \n";
				cout<<"Nombre producto: \n";
				cin>> prod3 ;
				cout<<"Costo de compra \n";
				cin>> costo3 ;
				cout<<"Precio de Venta \n";
				cin>> precio3 ;
				cout<<"Cantidad de Existencias \n";
				cin>> cant3; 
				cout<<"************************************************ \n";
			break;
			
			case 2:
				system("cls");
				system("color 02");
				cout<<"DETALLE INVENTARIO UMG \n";			
				cout<<"Nombre del producto			Costo			Precio			Cantidad \n";
				
					cout<<prod1 <<"\t";
					cout<<" \t \t \t \t" <<costo1;
					cout<<" \t \t \t" <<precio1;
					cout<<" \t \t \t" <<cant1 <<"\n";
			
					cout<<prod2 <<"\t";
					cout<<" \t \t \t \t" <<costo2;
					cout<<" \t \t \t" <<precio2;
					cout<<" \t \t \t" <<cant2 <<"\n";
				
					cout<<prod3 <<"\t";
					cout<<" \t \t \t \t" <<costo3;
					cout<<" \t \t \t" <<precio3;
					cout<<" \t \t \t" <<cant3 <<"\n";
				
			break;
			
			case 3:
			system("cls");	
			system("color 06");		
			cout<<endl;
			cout<<"Escriba el nombre del producto a vender\n";
			cin>>venta;
			cout<<"Ingrese la cantidad a vender\n";
			cin>> cantidadventa;
					if(venta==prod1)
					{
						if (cantidadventa<cant1)
						{
							cant1=cant1-cantidadventa;
							precioventa=precio1*cantidadventa;
							cout<<endl;
							cout<<"Precio de Venta total: " <<precioventa<<endl;
						}
						else {
							cout<<endl;
							cout<<"Producto insuficiente en el inventario\n";
							}
					}
				if(venta==prod2)
					{
					if (cantidadventa<cant2)
					{
					
						cant2=cant2-cantidadventa;
						precioventa=precio2*cantidadventa;
						cout<<endl;
						cout<<"Precio de Venta total: " <<precioventa<<endl;
					}
					else {
						cout<<endl;
						cout<<"Producto insuficiente en el inventario\n";
						}
					}
				if(venta==prod3)
					{
					if (cantidadventa<cant3)
					{
					
						cant3=cant3-cantidadventa;
						precioventa=precio3*cantidadventa;
						cout<<endl;
						cout<<"Precio de Venta total: " <<precioventa<<endl;
					}
					else {
						cout<<endl;
						cout<<"Producto insuficiente en el inventario\n";
						}
					}
				}	
			cout<<endl;				
			cout<<"Desea continuar? \n";
			cout<<"1.Si \n2.No \n ";
			cin>>rep;
	}
	while(rep==1);
}

