#include<stdio.h>

void main() {
	int num = 20;
	if(num > 20){	//False bcoz num is equal to 20 not greater.
		printf("num is greater than 20\n");
	}	
	printf("num:%d\n",num);
}
/*
	as the condition of if is false it will only execute the printf outsid of if
*/
