#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, b, c;
    float d;
    setlocale(LC_ALL, "");
    
   // printf("¬ведите три числа\n");
    scanf("%d%d%d", &a, &b, &c);
    d = (float)(a+b+c)/3;
    
    printf("%.2f", d);
    //printf("%d*%d*%d=%d", a, b, c, a*b*c);
    return 0;
}
