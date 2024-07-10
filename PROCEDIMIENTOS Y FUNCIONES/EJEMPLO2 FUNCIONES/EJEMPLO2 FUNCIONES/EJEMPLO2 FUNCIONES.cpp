
/*
	CHIMALTENANGO 31/03/2019
	PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA

	DESCRIPCION DEL PROGRAMA:
	EL SIGUIENTE PROGRAMA ES UN EJEMPLO ACERCA DEL USO 
	DE FUNCIONES INDEPENDIENTES DE NUESTRA FUNCION PRINCIPAL
*/

#include<iostream>

using namespace std;

int numMax(int x, int y);	//PROTOTIPOS DE FUNCION

int main() {
	int n1, n2, mayor;

	cout << "DIGITE EL PRIMER NUMERO: "; cin >> n1;
	cout << "DIGITE EL SEGUNDO NUMERO: "; cin >> n2;

	mayor = numMax(n1, n2);
	cout << "EL NUMERO MAYOR ES: " << mayor << endl;
	system("pause");
}

int numMax(int x, int y) {	//INICIO FUNCION
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}

	return z;
}