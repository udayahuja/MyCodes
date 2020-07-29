
#include<stdio.h>

void main() {

	int i=0;
	while( i < 4 ){
	
		int j=0;
		char a= 'a'; 
		while(j < 4){
			if(j < 3-i)
				printf("  ");
			else 
				printf("%c ",a++);
			j++;
		}
		printf("\n");
		i++;
	}
}
