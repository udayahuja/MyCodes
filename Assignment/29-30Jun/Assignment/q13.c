#include<stdio.h>

void main(){
	float n1, n2, n3;
	if(n1 >= n2 && n1 >= n3){
		printf("Largest number: %d\n",n1);
	}
	if(n2 >= n1 && n2 >= n3){
		printf("Largest number: %d\n",n2);
	}
	if(n3 >= n1 && n3 >= n2) {
		printf("Largest number: %d\n",n3);
	}
}
/*
	As the variables are not initialized there will be garbage value in all three variables so we cannot predict the output.

*/
