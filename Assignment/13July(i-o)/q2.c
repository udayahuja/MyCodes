#include<stdio.h>

void main(){
	int hrs,min;
	printf("Enter hours:");
	scanf("%d",&hrs);
	printf("Enter minutes:");
	scanf("%d",&min);

	printf("Total mins is:%d \n",(hrs*60)+min);
}
