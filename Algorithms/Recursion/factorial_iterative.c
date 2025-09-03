#include <stdio.h>

int factorial(int num){
	int result = 1;
	for (int i = 1; i <= num; i++){
		result *= i;
	}
	return result;
}

int main(){
	int numFactorial = factorial(5);
	printf("%d", numFactorial);
	return 0;
}



