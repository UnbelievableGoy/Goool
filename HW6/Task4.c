#include <stdio.h>

int form(int x)
{
	if (x>=2)
		return x * x + 4 * x + 5;
	else if (x < -2)
		return 4;
	else //if (x >= -2 && x < 2 )
		return x * x;
	return 0;
}


int main(void)
{
	int x,  max, d;
	if (scanf("%d", &x) != 1 ) return 0;
	
	max = form(x);
	while (scanf("%d", &x) == 1 && x != 0)
	{
		d = form(x);
		if (d > max)
		{	max = d;
			
		} 
	}
	
	
	printf("%d", max);
	return 0;
}

