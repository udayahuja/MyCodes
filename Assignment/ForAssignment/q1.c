#include<stdio.h>

void main(){

	int a;
	printf("Enter Number:");
	scanf("%d",&a);

	printf("The table of %d is:",a);
	for(int i=1;i<=10;i++)
		printf("%d ",a*i);
	printf("\n");
}
