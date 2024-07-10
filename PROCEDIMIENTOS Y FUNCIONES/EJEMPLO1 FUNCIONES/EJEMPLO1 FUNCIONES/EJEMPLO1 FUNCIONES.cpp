
#include<iostream>

using namespace std;

int suma(int x, int y) {
	int z;
	z = x + y;
	return z;
}


int main() {
	int A, B, C;
	cout << "INGRESE EL PRIMER VALOR: ";  cin >> A;
	cout << "INGRESE EL SEGUNDO VALOR: ";  cin >> B;
	C = suma(A, B);
	cout << "EL RESULTADO ES: " << C <<endl;
	system("pause");
}