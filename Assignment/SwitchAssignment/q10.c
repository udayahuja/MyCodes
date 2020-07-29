#include<stdio.h>

void main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);

	if(a<0 || b<0){
		printf("Sorry negative number\n");
	}else{
		switch(a*b % 2 == 0){
			case 1:printf("multiple is even\n");
			       break;
			case 0:printf("multiple is odd\n");
			       break;
		}
	}
}
