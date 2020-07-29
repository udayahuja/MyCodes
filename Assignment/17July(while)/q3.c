#include<stdio.h>

void main(){
	
	int num,dif=1;
	printf("Enter number:");
	scanf("%d",&num);
	if(num%2!=0)
		dif+=1;
	for(int i=num;i>=1;i-=dif)
		printf("%d ",i);
	printf("\n");
}
