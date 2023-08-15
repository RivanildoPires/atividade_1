#include <iostream>

using namespace std;

int main() {
	
	double altura;
	
	int sexo;
	
	cout<<"Digite seu sexo: 1 para mulher/ 2 para homem. ";
	
	cin >> sexo;
	
	if(sexo == 1) {
		
		cout << "Qual a sua altura?";
		
		cin >> altura;
		
		cout << "O peso ideal seria: " << (62.1 * altura) - 44.7;
	}
	
	if(sexo == 2) {
		
		cout << "Qual a sua altura?";
		
		cin >> altura;
		
		cout << "O peso ideal seria: " << (72.7 * altura) + 58;
	}
	
	return 0;
}
