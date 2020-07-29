
#include<stdio.h>

void main() {

	int num;
	printf("Enter number:");
	scanf("%d",&num);

	while(num!=1){
		int j=1;
		while(j<=10){
			printf("%d ",num*j++);
		}
		printf("\n");
		num--;
	}
} 
