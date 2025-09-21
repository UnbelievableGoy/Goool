#include <stdio.h>
#include <locale.h>

int main(){
	int number1, n, sum1, sum2;
		
	scanf("%d", &number1);
	sum1 = 0;
	sum2 = 1;
	for (n = 10; number1 > 10 ;  ){
		
		sum1 =  number1 % n;
		
		number1 = number1 / 10;
		
		sum2 = number1 % n;
		if (sum1 == sum2)
			break;
	}
	sum1 == sum2?printf("YES"):printf("NO");
	
	
	
	return 0;
	}
