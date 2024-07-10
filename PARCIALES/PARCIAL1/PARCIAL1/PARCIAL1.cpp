
/*
	CHIMALTENANGO 09/03/2019
	PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA

	DESCRIPCION DEL PROGRAMA:
	ES UN PROGRAMA DISEÑADO PARA EL INGRESO DE 3 NOTAS
	DE ESTUDIANTES UTILIZANDO ESTRUCTURAS REPETITIVAS COMO
	EL CICLO FOR, DO-WHILE. ASI TAMBIEN COMO EL USO DE ESTRUCTURAS
	CONDICICONALES COMPUESTAS (IF-ELSE).
*/

#include<iostream>	//LIBRERIA ESTANDAR PARA LA ENTRADA Y SALIDA DE DATOS
#include<string>
#include<locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");
	system("color f0");

	int pp[3], sp[3], zona[3], pf[3], ef[3], notafinal[3];	//VARIABLES DE TIPO ENTERO
	int mayor=0,menor=100;
	string nombre[3], name1, name2;

	for (int i = 0; i < 3; i++) {	//INICIO DEL CICLO FOR
		cout << "DIGITE EL NUMBRE DEL ALUMNO " << i + 1 << ": ";
		cin.get();
		getline(cin, nombre[i]);
		
		//PRIMER PARCIAL
		do {	//INCIO DEL CICLO DO-WHILE
			if (pp[i] > 10) {
				cout << "NOTA NO VALIDA INGRESE OTRO NUMERO MENOR QUE 10\n";	//CONDICIONANTE VERDADERA
				system("pause");
			}
			system("cls");
			cout << "PRIMER PARCIAL (0-10 pts): "; cin >> pp[i];	//CONDICIONANTE FALSA
		} while (pp[i] > 10);	//FINAL DEL CICLO DO-WHILE

		//SEGUNDO PARCIAL
		do {	//INCIO DEL CICLO DO-WHILE
			if (sp[i] > 20) {
				cout << "NOTA NO VALIDA INGRESE OTRO NUMERO MENOR QUE 20\n"; //CONDICIONANTE VERDADERA
				system("pause");
			}
			system("cls");
			cout << "SEGUNDO PARCIAL (0-20 pts ): "; cin >> sp[i];	//CONDICIONANTE FALSA
		} while (sp[i] > 20);	//FINAL DEL CICLO DO-WHILE

		//ACTIVIDADES
		do {	//INCIO DEL CICLO DO-WHILE
			if (zona[i] > 20) {
				cout << "NOTA NO VALIDA INGRESE OTRO NUMERO MENOR QUE 20\n";	//CONDICIONANTE VERDADERA
				system("pause");
			}
			system("cls");
			cout << "ZONA (0-20 pts ): "; cin >> zona[i];	//CONDICIONANTE FALSA
		} while (zona[i] > 20);	//FINAL DEL CICLO DO-WHILE

		//PROYECTO FINAL
		do {	//INCIO DEL CICLO DO-WHILE
			if (pf[i] > 25) {
				cout << "NOTA NO VALIDA INGRESE OTRO NUMERO MENOR QUE 25\n";	//CONDICIONANTE VERDADERA
				system("pause");
			}
			system("cls");
			cout << "PROYECTO FINAL (0-25 pts ): "; cin >> pf[i];	//CONDICIONANTE FALSA
		} while (pf[i] > 25);	//FINAL DEL CICLO DO-WHILE

		//EXAMEN FINAL
		do {	//INCIO DEL CICLO DO-WHILE
			if (ef[i] > 25) {
				cout << "NOTA NO VALIDA INGRESE OTRO NUMERO MENOR QUE 25\n";	//CONDICIONANTE VERDADERA
				system("pause");
			}
			system("cls");
			cout << "EXAMEN FINAL (0-25 pts ): "; cin >> ef[i];	//CONDICIONANTE FALSA
		} while (ef[i] > 25);	//FINAL DEL CICLO DO-WHILE

		notafinal[i] = pp[i] + sp[i] + zona[i] + pf[i] + ef[i];	//SUMA ITERATIVA DE LA VARIABLE NOTAFINAL
		system("cls");
	}	//FINAL DE CICLO FOR

	cout << "\nNOTAS DE ALUMNOS\n";
	cout << " " << endl;
	cout << "NOMBRES: ";
	cout << "\tPP";
	cout << "\tSP ";
	cout << "\tZONA ";
	cout << "\tPF ";
	cout << "\tEF ";
	cout << "\tNF";
	cout << "\tAPROBÓ/REPROBÓ " << endl;
	cout << " " << endl;

	for (int j = 0; j < 3; j++){
		cout << " " << endl;
		cout << nombre[j];
		cout << "\t \t" << pp[j];
		cout << "\t" << sp[j];
		cout << "\t" << zona[j];
		cout << "\t" << pf[j];
		cout << "\t" << ef[j];

		notafinal[j] = pp[j] + sp[j] + zona[j] + pf[j] + ef[j];
		cout << "\t" << notafinal[j];

		if (notafinal[j] < 61){

			cout << "\t REPROBÓ..." << endl;
		}
		else{
			cout << "\t APROBÓ..." << endl;
		}

		if (notafinal[j] > mayor) { //Determinamos el mayor elemento en cada
			mayor = notafinal[j]; //iteracion del bucle
		}
		
		if (notafinal[j] > mayor) { //Determinamos el mayor elemento en cada
			mayor = notafinal[j]; //iteracion del bucle
		}
		else {
			if (notafinal[j] < menor) {
				menor = notafinal[j];
				name2 = nombre[j];
			}
			else {
				name1 = nombre[j];
			}
		}
	}

	cout << endl<<endl;
	cout << "LA NOTA MAS ALTA ES: ";
	cout << mayor << " "<< name1;
	cout << "\nLA NOTA MAS BAJA ES: ";
	cout << menor << " "<<name2;

	cout << endl;
	system("pause");

	return 0;
}



	



