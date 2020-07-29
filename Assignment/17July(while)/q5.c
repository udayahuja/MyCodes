#include<stdio.h>

void main(){
	
	int l,u;
	printf("Enter lower and upper bound:");
	scanf("%d %d",&l,&u);
	while(l<=u){
		if(l%2==0)	printf("%d ",l*l);
		else 	printf("%d ",l*l*l);
		l++;
	}
	printf("\n");

}
