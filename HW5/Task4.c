#include <stdio.h>
#include <locale.h>

int main(){
	int number1, n;
		n = 1;
		
	scanf("%d", &number1);
	
	for (;number1 >= 10;  ){
		n ++;
		
		number1 = number1 / 10;
		
	}
	n==3?printf("YES"):printf("NO");
	
	
	
	return 0;
	}
