#include <stdio.h>
#include <locale.h>

int main(){
	int number1, number2, n;
		n = 0;
		
	scanf("%d%d", &number1, &number2);
	
	while (number1 <= number2 ){
		
		n = n + number1*number1;
		number1++;
	
	}
	printf("%d", n);
	
	
	
	return 0;
	}
