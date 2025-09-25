#include <stdio.h>

int sum (int n)
{	int result = 0;
	for (int i = 0; i != n+1; i++)
	{
		result += i;
	}
	printf("%d", result);
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	sum(n);
	return 0;
}

