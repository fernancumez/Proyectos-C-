/*
CHIMALTENANGO, 09 DE FEBRERO DE 2019
PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA

	DESCRIPCION DEL PROGRAMA :
	ES UN PROGRAMA EJEMPLO EN LA CUAL SE HACE USO EL 
	INGRESO Y SALIDA DE DATOS EN CONSOLA. NO OBSTANTE 
	MUESTRA LOS DATOS PERSONALES DE ALGUIEN.

*/

#include "pch.h"	//LIBRERIA CONSTANTE
#include <iostream> //LIBRERIA PARA LA ENTRADA Y SALIDA DE DATOS

using namespace std; //PERMITE EL USO DE COUT Y CIN

int main()
{
	char nombres[40], apellidos[30], direccion[40],genero;  //VARIABLES DE TIPO CARACTER
	int edad, telefono;	//VARIABLES DE TIPO ENTERO
	float colegiatura;	//VARIABLES DE TIPO FLOTANTE

	cout << "NOMBRES: ";
	cin.getline(nombres, 40, '\n');	//PERMITE EL INGRESO Y SALIDA DEL NOMBRE DE LA PERSONA EN PANTALLA
	cout << "APELLIDOS: ";
	cin.getline(apellidos, 30, 'n\n');	//PERMITE EL INGRESO Y SALIDA DEL APELLIDO DE LA PERSONA EN PANTALLA
	cout << "DIRECCION: "; 
	cin.getline(direccion,40, '\n\n');	 //MUESTRA LA DIRECCION DE LA PERSONA EN PANTALLA
	cout << "EDAD: "; cin >> edad;             // INGRESO Y SALIDAD DE LOS AÑOS DE LA PERSONA EN PANTALLA
	cout << "TELEFONO: ";cin >> telefono;	     //MUESTRA EL NUMERO DE TELEFONO DE LA PERSONA EN PANTALLA
	cout << "GENERO(SEXO): ";cin >> genero;      //MUESTRA EL GENERO DE LA PERSONA EN PANTALLA
	cout << "COLEGIATURA: ";cin >> colegiatura; //MUESTRA LA COLEGIATURA DE LA PERSONA EN PANTALLA

	system("pause");
	return 0;
}