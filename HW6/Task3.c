#include <stdio.h>
#include <math.h>
int middle(int a, int b)
{
	return (a+b)/2;
}



int main()
{	
	
	int result, a, b;
	scanf("%d %d", &a, &b);
	result = middle(a, b);
	printf("%d", result);
	return 0;
}

