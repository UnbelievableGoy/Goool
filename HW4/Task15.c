#include <stdio.h>
#include <locale.h>


int main()
{ 
	
    float x1, y1, x2, y2, b, k;
	setlocale(LC_ALL, "");
    
   // printf("Введите число\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    if (x1 != x2){

    k = (y2-y1)/(x2-x1);
    b = y1 - k*x1;
    
    printf("%.2f %.2f", k, b);
	}
    
    return 0;
}
