#include <stdio.h>
#include <locale.h>


int main()
{ 
	
    int a, b, c, max;
	setlocale(LC_ALL, "");
    
   // printf("Введите число\n");
    scanf("%d", &a);
    
    b = a/100;
    
    a = a - 100*b;
    
    c = a/10;
    
    a = a - 10*c;
    
    max = b >= c?b:c;
    max = max >a?max:a;
    
    printf("%d", max);
    //printf("%d*%d*%d=%d", a, b, c, a*b*c);
    return 0;
}
