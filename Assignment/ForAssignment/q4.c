#include<stdio.h>

void main(){
	printf("The divisors of 50 are:");
	for(int i=1;i<=50/2;i++){
		if( 50%i == 0 )
			printf("%d ",i);
	}
	printf("\n");
}
