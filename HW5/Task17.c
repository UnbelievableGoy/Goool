#include <stdio.h>
#include <locale.h>

int main()
{
	int number1, sum, i, r, mult, copy;
	scanf("%d", &number1);
	i = 10;
	
	r = 1;
	for (;i < number1;){
		i++;
		mult = 1;
		sum =0;
		copy = i ;
		while (copy > 0){
		
		r = copy % 10;
		sum = sum + r;
		mult = mult * r;
		copy = copy / 10;
			

		}
		if (mult == sum)
				printf("%d ", i);
	}
return 0;
}

	
