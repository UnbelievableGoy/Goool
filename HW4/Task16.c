#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2, number3;
	
	//printf("Ввидите два числа\n");
	scanf("%d%d%d", &number1, &number2, &number3);
	
	(number1<number2 && number2<number3)?printf("YES"):printf("NO");
	
	
	
	return 0;
}


	
