#include<stdio.h>

void main() {
	int s1,s2,s3,s4,s5;
	printf("Enter marks of five subjects:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

	switch(s1+s2+s3+s4+s5>=25){
		case 1:
			printf("You passed!!!\n");
			break;
		case 0:
			printf("You failed!!!\n");
			break;
	}
}
