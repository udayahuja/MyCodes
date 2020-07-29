#include<stdio.h>

void main() {

	int a;
	printf("Enter number:");
	scanf("%d",&a);
	int flag =1;
	for(int i=2;i<=(a/2)+1 ; i++){
		if(a%i == 0){
			flag=0;
			printf("%d is not a prime number!!!\n",a);
			break;
		}
	}
	if(flag)
		printf("%d is a prime number!!!\n",a);

}
