
/*  CHIMALTENANGO 23/02/2019
	PROGRAMADOR: LUIS FERNANDO CUMEZ QUINA.

	DESCRIPCION DEL PROGRAMA:
	ESTE PROGRAMA PERMITE EL INGRESO DE NUMEROS, LA CUAL
	NOS MOSTRARA EN PANTALLA EL NUMERO DE DIGITOS QUE POSEE.
	SIN EMBARGO TINE LA CONDICIONANTE QUE EL NUMERO QUE SE 
	INGRESE DEBE ESTAR EN UN RANGO DE (1 - 999).

*/

#include<iostream>	//LIBRERIA PARA LA ENTRADA Y SALIDA DE DATOS
#include<string>	//LIBRERIA PAR EL USO DE DATOS DE TIPO STRING

using namespace std;

int main() {
	int num, opcion;	//VARIABLES DE TIPO ENTERO

	do {	//CICLO DO WHILE
		cout << "INGRESE UN NUMERO (1 -> 999): "; cin >> num;
		if (num >= 1 && num <= 999) {	//IF ANIDADO
			if (num < 10) {		
				cout << "EL NUMERO TIENE UN DIGITO\n";	//IF ANIDADO CUANDO LA CONDICION SE CUMPLE 
			}
			else {
				if (num < 100) {
					cout << "EL NUMERO TIENE DOS DIGITOS\n";  //IF ANIDADO CUANDO LA CONDICION SE CUMPLE
				}
				else {
					if (num < 1000) {
						cout << "EL NUMERO TIENE TRES DIGITOS\n";	//IF ANIDADO CUANDO LA CONDICION SE CUMPLE
					}	
				}
			}
			cout << "\nDESEA INGRESAR OTROS NUMEROS: ";		//ES UN MENU PARA DECIDIR SI SE QUIERE SEGUIR INGRESADO DATOS
			cout << "\n1.SI  2.NO";
			cout << "\nINGRESE LA OPCION: "; cin >> opcion;
			system("pause");
			system("cls");	//BORRAR PANTALLA
		}
		else {
			cout << "VALOR INGRESADO NO VALIDO\n";		//FIN DEL IF ANIDADO CUANDO LA CONDICION NO SE CUMPLE
			system("pause");
			system("cls");	//BORRAR PANTALLA
		}
	} while (num <= 1 || num >= 999 || opcion!=2);		//CONDICIONES PARA QUE EL CICLO SE REPITA

	return 0;
	}		