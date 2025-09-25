#include <stdio.h>
#include <math.h>
int sqr1 (int n, int p)
{	
	return (int)pow(n, p);
	
}



int main()
{	int n ,p;
	scanf("%d %d", &n, &p);
	int result = sqr1(n, p);
	printf("%d", result);
	return 0;
}

