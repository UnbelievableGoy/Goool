#include <stdio.h>
#include <math.h>

int main() {
    int number, n, give;
    scanf("%d", &number);
	give = 0;
    
    while (number > 0) {
	n = number % 10;
	give = give * 10 + n;
	number /= 10;
	
	}   
    printf("%d", give);
    return 0;
}
