#include <stdio.h>
#include <locale.h>

int main()
{
	int number1, number2, nod;
	scanf("%d%d", &number1, &number2);
for (;;){
	if (number1 == number2){
		printf("%d", nod = number1);
		break;
						   }
	if (number1 > number2)
		number1 = number1 - number2;
	else if (number1 < number2)
		number2 = number2 - number1;
		}
	
	return 0;
}


	
