#include<stdio.h>

void main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	switch(num){
		
		case 1:
			printf("One\n");
			break;

		case 2:
			printf("Two\n");
			break;

		case 3:
			printf("Three\n");
			break;

		case 4:
			printf("Four\n");
			break;

		case 5:
			printf("Five\n");
			break;

		default:
			printf("The number is greater than five\n");
			break;

	}
}
