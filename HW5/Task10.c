#include <stdio.h>
#include <locale.h>

int main()
{
	
	int number1,  n, f,  i, r;
	f = 0;
	i = 0;
	r = 0;
	scanf("%d", &number1);
	for(;;)
	{
		if (number1 == 0)
			{
			printf("YES");
			goto skip;
			}
		n = number1 % 10;
		number1 = number1 /10;
		f = number1 % 10;
		r++;
		if (f < n)
		{
			i++;
		
				
		}else if (f >= n )
			{
			printf("NO");
			goto skip;
			}  
		
	}if (i == r)
				{
					
					printf("YES");
					
					goto skip;
				}	 
skip:
	
	
	return 0;
}
