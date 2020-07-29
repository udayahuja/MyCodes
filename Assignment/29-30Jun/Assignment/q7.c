#include<stdio.h>

void main(){
	int weight=50;
	if(weight<50 && weight >30){	//false && weight>30 => false
		printf("You are under weight\n");
	}
	if(weight>=50 && weight <= 70){	//true && true => true
		printf("you are well maintained\n");
	}
	if(weight > 70);{	//false but there is null statement so the block will get executed
		printf("you are overweight you have to work hard\n");
	}
}
