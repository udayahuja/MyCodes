#include<stdio.h>

void main(){
	int num=120;
	if(num%2 ==0){	//120%2 == 0 => 0==0 => true
		printf("%d is divisible by 2\n",num);	//this will execute
		if(num%3 == 0){		//120%3==0 => 0==0 => true
			printf("%d is divisible by 3\n",num);	//this will execute
			if(num%5==0){	//120%5 == 0 => 0==0 => true
				printf("%d is divisible by 5\n",num);	// this will execute
			}else {
				printf("%d is not divisible by 5\n",num);
			}
		}else{
			printf("%d is not divisible by 3\n",num);
		}
	}
	else{
		printf("%d is not divisible by 2\n",num);
	}
}
