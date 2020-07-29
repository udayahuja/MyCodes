
#include<stdio.h>

void main() {

	int num ; 
	int fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	printf("Enter number:");
	scanf("%d", &num);
	
	int numTemp = num,temp = 0;

	while(numTemp){
		temp += fact[numTemp%10];
		numTemp /= 10;
	}	
	
	if(temp == num)
		printf("%d is a Strong number.\n",num);
	else
		printf("%d is a not a Strong number.\n",num);

}
