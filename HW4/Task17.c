#include <stdio.h>
#include <locale.h>

int main()
{
	int mounth;
	scanf("%d", &mounth);
	
	 if (mounth  == 12 || mounth  ==  1 || mounth  ==  2 ){
		printf("winter");
	}
	else if (mounth  == 4 || mounth  ==  5 || mounth  ==  3){
		printf("spring");
	}
	else if (mounth  ==  5 || mounth  ==  6 || mounth  ==  7){
		printf("summer");
	}
	else if (mounth  == 9 || mounth  ==  10 || mounth  ==  11){
		printf("autumn");
	};
	return 0;





}
