
/*
	CHIMALTENANGO 30/03/2019
	PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA

	DESCRIPCION DEL PROGRAMA: ESTE PROGRAMA TIENE COMO OBJETIVO
	HACER ÉNFASIS AL USO DE PROCEDIMIENTOS
*/


#include<iostream>	//LIBRERIAS 
#include<locale>

using namespace std;

float sum, rest, mult, divi;	//VARIABLES GLOBALES
float n1, n2;

void suma();	//PROTOTIPOS 
void resta();
void multiplicacion();
void division();

void suma() {	//INCIO PROCEDIMIENTO SUMA
	do {
		system("cls");
		cout << endl << "SUMA" << endl;
		cout << "DIGITE LA PRIMERA CANTIDAD: "; cin >> n1;
		cout << "DIGITE LA SEGUNDO CANTIDAD: "; cin >> n2;
		if (n1 <= 0 || n2 <= 0) {
			cout << "NO SE ACEPTAN VALORES MENORES O IGUALES A CERO..." << endl;
			system("pause");
		}
		else {
			sum = n1 + n2;
			cout << "EL RESULDADO DE LA SUMA ES: " << sum << endl;
			system("pause");
		}
	} while (n1 <= 0 || n2 <= 0);
}	//FINAL PROCEDMIENTO SUMA

void resta() {	//INICIO PROCEDIMIENTO RESTA
	do {
		system("cls");
		cout << endl << "RESTA" << endl;
		cout << "DIGITE LA PRIMERA CANTIDAD: "; cin >> n1;
		cout << "DIGITE LA SEGUNDO CANTIDAD: "; cin >> n2;
		if (n1 <= 0 || n2 <= 0) {
			cout << "NO SE ACEPTAN VALORES MENORES O IGUALES A CERO..." << endl;
			system("pause");
		}
		else {
			rest = n1 - n2;
			cout << "EL RESULDADO DE LA RESTA ES: " << rest << endl;
			system("pause");
		}
	} while (n1 <= 0 || n2 <= 0);
}	//FINAL PROCEDIMIENTO RESTA

void multiplicacion() {	//INCIO PROCEDIMIENTO MULTIPLICACION
	do {
		cout << "DIGITE LA PRIMERA CANTIDAD: "; cin >> n1;
		cout << "DIGITE LA SEGUNDO CANTIDAD: "; cin >> n2;
		if (n1 <= 0 || n2 <= 0) {
			cout << "NO SE ACEPTAN VALORES MENORES O IGUALES A CERO..." << endl;
			system("pause");
		}
		else {
			mult = n1 * n2;
			cout << "EL RESULDADO DE LA MULTIPLICACION ES: " << mult << endl;
			system("pause");
		}
	} while (n1 <= 0 || n2 <= 0);
}	//FINAL PROCEDMIENTO MULTIPLICACION

void division() {	//INICIO PROCEDIMIENTO DIVISION
	do {
		system("cls");
		cout << endl << "DIVISION" << endl;
		cout << "DIGITE LA PRIMERA CANTIDAD: "; cin >> n1;
		cout << "DIGITE LA SEGUNDO CANTIDAD: "; cin >> n2;
		if (n1 <= 0 || n2 <= 0) {
			cout << "NO SE ACEPTAN VALORES MENORES O IGUALES A CERO..." << endl;
			system("cls");
		}
		else {
			divi = n1 / n2;
			cout << "EL RESULDADO DE LA DIVISION ES: " << divi << endl;
			system("pause");
		}
	} while (n1 <= 0 || n2 <= 0);
}	//FINAL PROCEDIMIENTO DIVISION

int main() {	//INICIO FUNCION PRINCIPAL
	setlocale(LC_ALL, "spanish");	//UTILIZACION DE GRAMATICA CASTELLANA
	system("color f0");	//COLOR DE CONSOLA
	int opcion;

	do {
		cout << endl << "CALCULADORA" << endl << endl;	//MENU PRINCIPAL
		cout << "1. SUMA" << endl;
		cout << "2. RESTA" << endl;
		cout << "3. MULTIPLICACION" << endl;
		cout << "4. DIVISION" << endl;
		cout << "5. SALIR" << endl;
		cout << endl << "DIGITE LA OPCION: "; cin >> opcion;

		switch (opcion) {	//INICIO SENTENCIA SWITCH
		case 1:
			suma();
			system("cls");
			break;
		case 2:
			resta();
			system("cls");
			break;
		case 3:
			multiplicacion();
			system("cls");
			break;
		case 4:
			division();
			system("cls");
			break;
		case 5:
			cout << "SALIENDO DEL PROGRAMA..." << endl;
			system("pause");
			break;
		default:
			cout << "VALOR INGRESADO NO VALIDO..." << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (opcion != 5);	//FINAL SENTENCIA SWITCH

	return 0;
}	//FINAL FUNCION PRINCIPAL