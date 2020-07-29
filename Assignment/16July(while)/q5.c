#include<stdio.h>

void main() {
	
	int cnt=0;
	for(int i=1;i<=50;i++){
		if(i%2 == 0 && i%5 == 0) cnt++;
	}
	printf("There is %d even numbers btwn 1-50 divisible by 5\n",cnt);
}
