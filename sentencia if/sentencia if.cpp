#include <iostream>

using namespace std;

int main()
{
	int numero, dato = 5;

	cout << "dame un numero; ";
	cin >> numero;

	if (numero > dato) {
		cout << "El numero e mayor a 5";
	}
	else {
		cout << "el numero es menor a 5";
	}
}
