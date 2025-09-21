#include <stdio.h>
#include <locale.h>

int main(){
	int number1, n, sum, r;
		
	scanf("%d", &number1);
	sum = 0;
	if (number1 != 9)
{
		for (n = 10, r = 0; number1 >= 10; ){
			sum =  number1 % n;
			
			number1 = number1 / 10;
		
		if (sum == 9 || number1 == 9) {
			r ++;
			
		if (r == 2)
			break;
		};
		
	}
	r == 1?printf("YES"):printf("NO");
}
	else 
		printf ("YES");

					
	 
	
	
	
	return 0;
	}
