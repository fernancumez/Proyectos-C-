
/*
	CHIMALTENANGO 31/03/2019
	PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA

	DESCRIPCION DEL PROGRAMA: ESTE PROGRAMA TIENE COMO OBJETIVO
	HACER ÉNFASIS AL USO DE FUNCIONES
*/

#include<iostream>	//LIBRERIAS

using namespace std;

float n1, n2, sum, rest, mult, divi;	//VARIABLES GLOBALES
int opcion;

void operacion();	//PROTOTIPO PROCEDIMIENTO
float operacion(float x, float y);	//PROTOTIPO FUNCION

int main() {	//FUNCION PRINCIPAL
	setlocale(LC_ALL, "spanish");	//USO DE GRAMATICA ESPAÑOL
	system("color f0");	//COLOR DE CONSOLA

	do {	
		cout << endl << "CALCULADORA" << endl << endl;
		cout << "1. SUMA" << endl;
		cout << "2. RESTA" << endl;
		cout << "3. MULTIPLICACION" << endl;
		cout << "4. DIVISION" << endl;
		cout << "5. SALIR" << endl;
		cout << endl << "DIGITE LA OPCION: "; cin >> opcion;

		switch (opcion) {
			case 1:
				do{
					system("cls");
					cout << endl << "SUMA" << endl;
					operacion();
					system("cls");
				} while (n1 <= 0 || n2 <= 0);
				break;
			case 2:
				do {
					system("cls");
					cout << endl << "RESTA" << endl;
					operacion();
					system("cls");
				} while (n1 <= 0 || n2 <= 0);
				break;
			case 3:
				do {
					system("cls");
					cout << endl << "MULTIPLICACION" << endl;
					operacion();
					system("cls");
				} while (n1 <= 0 || n2 <= 0);
				break;
			case 4:
				do {
					system("cls");
					cout << endl << "DIVISION" << endl;
					operacion();
					system("cls");
				} while (n1 <= 0 || n2 <= 0);
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


	} while (opcion != 5);

	return 0;
}	//FINAL FUNCION PRINCIPAL


void operacion() {	//INCIO PROCEDIMIENTO OPERACION
	cout << "DIGITE LA PRIMERA CANTIDAD: "; cin >> n1;
	cout << "DIGITE LA SEGUNDO CANTIDAD: "; cin >> n2;

	if (n1 <= 0 || n2 <= 0) {	//INCIO IF ANIDADO
		cout << "NO SE ACEPTAN VALORES MENORES O IGUALES A CERO..." << endl;
		system("pause");
	}
	else {
		if (opcion == 1) {
			sum = operacion(n1, n2);
			cout << "EL RESULDADO DE LA SUMA ES: " << sum << endl;
			system("pause");
		}
		else {
			if (opcion == 2) {
				rest = operacion(n1, n2);
				cout << "EL RESULDADO DE LA RESTA ES: " << rest << endl;
				system("pause");
			}
			else {
				if (opcion == 3) {
					mult = operacion(n1, n2);
					cout << "EL RESULDADO DE LA MULTIPLICACION ES: " << mult << endl;
					system("pause");
				}
				else {
					if (opcion == 4) {
						divi = operacion(n1, n2);
						cout << "EL RESULDADO DE LA DIVISION ES: " << divi << endl;
						system("pause");
					}	//FINAL IF ANIDADO
				}
			}
		}
	}
}	//FINAL PROCEDIMIENTO OPERACION

float operacion(float x, float y) {	//INICIO FUNCION PROCEDIMIENTO
	float z;
	if (opcion == 1) {
		z = x + y;
	}
	else {
		if (opcion == 2) {
			z = x - y;
		}
		else {
			if (opcion == 3) {
				z = x * y;
			}
			else {
				if (opcion == 4) {
					z = x / y;
				}
			}
		}
	}
	return z;
}	//FINAL FUNCION PROCEDIMIENTO



