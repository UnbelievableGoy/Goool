#include <stdio.h>
#include <locale.h>

int main()
{
	
	int number1,  n, f, i, r;
	n = 0;
	f = 1;
	r = 0;
	scanf("%d", &number1);
 
	i = number1;
	for(;i >= 10;){
		n = i % 10;
		i = i /10;
		
		for(;number1 >=10;){
			number1 = number1 / 10;
			f = number1 % 10;
			
				if (f == n){
					r++;
					printf("YES");
					
					goto skip;
		}
	
		}
	
	
}  
skip:
	if(r == 0)
		printf("NO");
	
	return 0;
}
