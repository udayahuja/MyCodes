#include<stdio.h>

void main(){

	char a,b;
	printf("Enter last and first:");
	scanf("%c %c",&a,&b);
	for(char i=a;i>=b;i--){
		printf("%c ",i);
	}
	printf("\n");
}
