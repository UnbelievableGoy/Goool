#include <stdio.h>
#include <locale.h>

int main(){

	int number1, number2;
	scanf("%d %d", &number1, &number2 );
	
	if(number1>number2)
		printf("Above");
		
	else if (number1<number2)
		printf("Less");
	
	else if (number1 == number2){
		printf("Equal");
	};
		return 0;
		

	
}
