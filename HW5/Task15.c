#include <stdio.h>
#include <math.h>

int main() {
    int number, n;
    n = 0;
while (1) {
    scanf("%d", &number);
    if (number == 0) 
		break;    
    if (number % 2 == 0) 
		n++;   
}
printf("%d", n);
return 0;
}
