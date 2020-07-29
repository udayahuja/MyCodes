
#include<stdio.h>

int fact(int num){
	int fact = 1;
	while(num > 1){
		fact = fact*num;
		num--;
	}
}

void main(){

	for(int i=0;i<10;i++){
		printf("%d = %d\n",i,fact(i));
	}
}
