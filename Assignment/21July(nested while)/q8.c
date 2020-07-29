
#include<stdio.h>

void main() {
	int i=0;
	while(i<4){
		int j = 0;
		while(j++<i){
			printf("1 ");
		}
		printf("0\n");
		i++;
	}
}
