
#include<stdio.h>

void main() {
 
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	int i=0;
	while(i < num){
		int j=1;
		printf("* ");
		if(i==0 || i==num-1){
			while(j++<num){
				printf("* ");
			}
			printf("\n");
		}else{
			while(j++ < num-1){
				printf("  ");
			}
			printf("*\n");
		}
		i++;
	}
}
