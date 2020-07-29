#include<stdio.h>

void main(){

	int days;
	printf("Enter no of days to complete the assignment:");
	scanf("%d",&days);
	days+=1;
	while(days-->1)
		printf("%d days remaining\n",days);
	printf("0 days assignment is overdue\n");
}
