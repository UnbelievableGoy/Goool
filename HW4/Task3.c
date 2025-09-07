#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int number1, number2, min, max;
	number1 = 0;
	number2 = 0;
	min = 0;
	max = 0;
	//printf("¬видите два числа\n");
	scanf("%d%d", &number1, &number2);
	
	if (number1>number2){
		max = number1;
		min = number2;
		}else{
			
			max = number2;
			min = number1;
			
			}
	
	printf("%d %d", min, max);
	
	return 0;
}

