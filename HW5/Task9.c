#include <stdio.h>
#include <locale.h>

int main()
{
	
	int number1,  n,  i, r;
	n = 0;
	i = 0;
	r = 0;
	scanf("%d", &number1);
	for(;;)
	{
		n = number1 % 10;
		
		if (n % 2 == 0)
		{
			i++;
		number1 = number1 /10;
				if (i == 4)
				{
					r++;
					printf("YES");
					
					goto skip;
		}	 
				}else if (n % 2 != 0)
		{
			printf("NO");
			goto skip;
						
	
	
		}  
		}
skip:
	
	
	return 0;
}
