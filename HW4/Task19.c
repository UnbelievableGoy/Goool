#include <stdio.h>
#include <locale.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	(a+b)>c && (a+c)>b && (b+c)>a?printf("YES"):printf("NO");

	
	return 0;
	
	}
