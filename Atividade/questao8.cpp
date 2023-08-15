#include <iostream>

using namespace std;

int main() {
	
	int horas;
	
	cout << "Horas trabalhadas: ";
	
	cin >> horas;
	
	int valorh;
	
	cout << "Valor por hora: ";
	
	cin >> valorh;
	
	cout << "Salario: " << horas * valorh << "\n";
	
	system("pause");
	
	return 0;
}
