
#include<stdio.h>

void main() {
	int i=0;
	while(i<5){
		int j = 0;
		while(j<=i){
			if(j%2 == 0)
				printf("1 ");
			else
				printf("0 ");
			j++;
		}
		printf("\n");
		i++;
	}
}
