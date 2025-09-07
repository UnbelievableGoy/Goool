#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2, number3, max, number4, number5;
	number1 = 0;
	number2 = 0;
	number3 = 0;
	//printf("Ввидите два числа\n");
	scanf("%d%d%d%d%d", &number1, &number2, &number3, &number4, &number5);
	
	max = (number1>number2)?number1:number2;
	max = (max>number3)?max:number3;
	max = (max>number4)?max:number4;
	max = (max>number5)?max:number5;
	printf("%d", max);
	
	return 0;
}

