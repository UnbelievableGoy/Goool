#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{ 
	
    int a, b, c;
	setlocale(LC_ALL, "");
    
   // printf("¬ведите число\n");
    scanf("%d", &a);
    
    b = a/100;
    
    a = a - 100*b;
    
    c = a/10;
    
    a = a - 10*c;
    
    printf("%d", a+b+c);
    //printf("%d*%d*%d=%d", a, b, c, a*b*c);
    return 0;
}
