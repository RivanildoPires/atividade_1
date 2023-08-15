#include <iostream>

using namespace std;

int main() {
		
	int horas;
	
	cout << "Horas trabalhadas: ";
	
	cin >> horas;
	
	int valorh;
	
	cout << "Valor por hora: ";
	
	cin >> valorh;
	
	const int ir = 89.0;
	
	const int inss = 92.0;
	
	const int sindicato = 95.0;
	
	cout << "Salario: " << (((horas * valorh) * ir/100) * inss/100) * sindicato/100<< "\n";
	
	return 0;
}
