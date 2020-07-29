#include<stdio.h>

void main() {
	
	int num,per=1;
	printf("Enter number:");
	scanf("%d",&num);
	for(int i=2;i<=(num/2)+1;i++){
		if(num%i == 0)
			per+=i;
	}
	if(num==per)
		printf("%d is a perfect number!!\n",num);
	else
		printf("%d is a not perfect number!!\n",num);
}
