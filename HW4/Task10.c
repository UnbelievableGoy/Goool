#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2, number3, min, number4, number5;

	//printf("Ввидите два числа\n");
	scanf("%d%d%d%d%d", &number1, &number2, &number3, &number4, &number5);
	
	min = (number1<number2)?number1:number2;
	min = (min<number3)?min:number3;
	min = (min<number4)?min:number4;
	min = (min<number5)?min:number5;
	printf("%d", min);
	
	return 0;
}

