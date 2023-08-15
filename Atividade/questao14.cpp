#include <iostream>

using namespace std;

int main() {
	
	int num1;
	
	int num2;
	
	int num3;
	
	for(num1 = 1; num1 <=9; num1 ++){
		
		for(num2 = 1; num2 <=10; num2 ++){
			
			num3 = num1 * num2;
			
			printf("%d x %d = %d\n", num1,num2,num3);
			
		}
		printf("\n");
	}
	return 0;
}
