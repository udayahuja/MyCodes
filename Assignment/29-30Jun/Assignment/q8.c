#include <stdio.h>

void main(){
	int year=2020;
	if(year%4==0 && year%100 != 0 || year %400 ==0 ){	//true
		printf("%d year is leap year\n",year);
	}
}
/*
	year%4 == 0
	2020%4 == 0
	0 == 0
	true

	year%100 != 0
	2020%100 != 0
	20 != 0
	true

	=> true && true || year%400 == 0
	=> true || year%400==0
	=> true
*/
