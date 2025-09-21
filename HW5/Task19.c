#include <stdio.h>
#include <math.h>

int main() {
    int number, n, sum;
    scanf("%d", &number);
	sum = 0;
    
    while (number > 0) {
	n = number % 10;
	sum = sum + n;
	number /= 10;
	
	}
	if (sum == 10)
		printf("YES");
	else if (sum != 10)
		printf("NO");
    return 0;
}
