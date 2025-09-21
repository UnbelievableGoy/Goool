#include <stdio.h>
#include <math.h>

int main() {
    int number, n;
    n = 0;
    scanf("%d", &number);
    while (number != 0) {
	scanf("%d", &number);
	if (number % 2 == 0)
		n++; 
	}   
    printf("%d\n", n);
    return 0;
}
