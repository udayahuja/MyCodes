#include<stdio.h>

void main(){
	
	int a;
	printf("Enter minutes:");
	scanf("%d",&a);

	printf("%d Hours and %d minutes\n",a/60,a%60);
}
