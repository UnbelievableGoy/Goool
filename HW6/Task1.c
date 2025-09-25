#include <stdio.h>
void mod (int a)
{
	a<0?printf("%d", -1*a):printf("%d",a);
	
}

int main()
{	
	int a;
	scanf("%d", &a);
	mod(a);
	
	return 0;
}

