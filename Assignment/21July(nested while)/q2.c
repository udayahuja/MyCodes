
#include<stdio.h>

void main() {
	int i=0,print = 1;
	
	while(i < 5){
		int j=0;
		while(j++ <= i){
			printf("%d ",print++);
		}
		printf("\n");
		print--;
		i++;
	}
}
