#include <iostream>

using namespace std;

int main() {
	
	int celsius;
	
	cout<<"Digite os quantos graus celsius: ";
	
	cin >> celsius;
	
	cout << "Conversao para farenheit: " << (celsius * 9/5) + 32;
	return 0;
}
