#include<stdio.h>

void main(){
	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	if (number1 >= number2) {
		if (number1 == number2) {
			printf(" %d = %d\n",number1,number2);
		}
		else {
			printf(" %d > %d\n", number1, number2);
		}
	}
	else {
		printf(" %d < %d\n",number1, number2);
	}
}
/*
	input:10 10
	number1 >= number2 => true
	
	number1 == number2 => true
*/
