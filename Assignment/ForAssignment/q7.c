#include<stdio.h>

void main(){
	
	int num,limit;
	printf("Enter number:");
	scanf("%d",&num);

	printf("Enter limit:");
	scanf("%d",&limit);

	for(int i=num;i<=limit;i+=num){
		printf("%d ",i);
	}
	printf("\n");
}
