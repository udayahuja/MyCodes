#include<stdio.h>

void main() {
	float x=5.2, y=10.5;
	if(x == 5.2){	//true
		printf("x : %d\n",x);	//5.2
	}
	if(y == 10.5);{ 	//true but there is null statement after it so in if there will be no output but the block after if will get executed
		printf("y : %d\n",y);	//10.5
	}
}
