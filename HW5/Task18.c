#include <stdio.h>
#include <locale.h>

int main()
{
	int number1, i, fib ,lastFib1, lastFib2;
	scanf("%d", &number1);
	i = 0;
	fib = 0;
	lastFib1 = 1;
	lastFib2 = 1;
	for (;i != number1; i++){
		lastFib2 = lastFib1;
		lastFib1 = fib;
		fib =  lastFib1 + lastFib2;
		
	printf("%d ", fib);
	}
return 0;
}

	
