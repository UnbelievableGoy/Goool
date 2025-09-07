#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2;
	number1 = 0;
	number2 = 0;
	
	printf("¬видите два числа\n");
	scanf("%d%d", &number1, &number2);
	
	printf("%d %d", number2, number1);
	
	return 0;
}
