#include <iostream>

using namespace std;

int main() {
	float nota1;
	
	cout << "Primeira nota: ";
	
	cin >> nota1;
	
	float nota2;
	
	cout << "Segunda nota: ";
	
	cin >> nota2;
	
	float nota3;
	
	cout << "Terceira nota: ";
	
	cin >> nota3;
	
	float nota4;
	
	cout << "Quarta nota: ";
	
	cin >> nota4;
	
	cout << "Media final: " << (nota1 + nota2 + nota3 + nota4)/4;
	return 0;
}
