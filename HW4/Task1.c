#include <stdio.h>
#include <locale.h>

int main(){
	int number1, number2, result;
		number1 = 0;
		number2 = 0;
		result = 0;
	scanf("%d%d", &number1, &number2);
	result = number1 - number2;
	printf("%d",result);
	
	return 0;
	}
