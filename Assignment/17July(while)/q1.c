#include<stdio.h>

void main() {
	
	int num,sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	for(int i=0;i<=num;i++)
		sum+=i;
	printf("Sum of natural numbers between 1-%d is %d\n",num,sum);
}
