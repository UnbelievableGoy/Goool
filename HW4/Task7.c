#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2, number3, max, min, number4, number5;
	number1 = 0;
	number2 = 0;
	number3 = 0;
	//printf("Ввидите два числа\n");
	scanf("%d%d%d%d%d", &number1, &number2, &number3, &number4, &number5);
	
	max = (number1>number2)?number1:number2;
	max = (max>number3)?max:number3;
	max = (max>number4)?max:number4;
	max = (max>number5)?max:number5;
	min = (number1<number2)?number1:number2;
	min = (min<number3)?min:number3;
	min = (min<number4)?min:number4;
	min = (min<number5)?min:number5;
	printf("%d",min + max );
	
	return 0;
}


	
