#include <stdio.h>
#include <math.h>

int main() {
    int number, n, chet, nechet;
    scanf("%d", &number);
	chet = 0;
    nechet = 0;
    while (number > 0) {
	n = number % 10;
	
	
		if (n % 2 == 0)
			chet++;
		else if (n % 2 != 0)
			nechet++;	
	number /= 10;
	}   
    printf("%d %d", chet, nechet);
    return 0;
}
