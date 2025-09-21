#include <stdio.h>
#include <locale.h>

int main(){
	int number1, n, sum;
		
	scanf("%d", &number1);
	sum = 0;
	for (n = 10; number1 >= 10; number1 = number1 / 10 ){
		sum = sum + number1 % n;
		
		number1 = number1 - (number1 % n);
		
		
		
	}
	printf("%d", sum + number1);
	
	
	
	return 0;
	}
