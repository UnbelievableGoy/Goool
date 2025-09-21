#include <stdio.h>
#include <locale.h>

int main()
{
    int number1, i;
    scanf("%d", &number1);
   for (i = 1; i <= number1; i++)
   {
    
        printf ("%d %d %d\n", i, i*i, i*i*i);
     
   };
   
   return 0;
}
