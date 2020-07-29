#include<stdio.h>

void main() {
	
	int count=0,num,num1;
	printf("Enter number:");
	scanf("%d",&num);
	num1=num;
	while(num!=0){
		num/=10;
		count+=1;
	}
	printf("The are %d numbers in %d\n",count,num1);
}
