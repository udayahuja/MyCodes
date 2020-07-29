
#include<stdio.h>

void main() {
	
	int i=0,print = 1;
	while(i<4){
		int j=0;
		while(j < 4){
			if(j < 3-i)
				printf(" ");
			else 
				printf("%d ",print++);
			j++;
		}
		i++;
		printf("\n");
	}
}
