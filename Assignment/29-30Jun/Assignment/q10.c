#include<stdio.h>

void main(){
	int aNum = 0;
	char aChar;
	if(!aNum){	//!0 => 1 => true
		printf("Inside First If...\n");
		aNum += 20;	//aNum=20
		aChar = 'T';	//achar='T'
	}
	if(aNum % 4 != 0){	//20%4 !=0 => 0!=0 => false
		printf("Inside Second If...\n");
		aNum -= 20;
		aChar = 'F';
	}
	if(aNum == 0) {	// 20==0 => false
		printf("Inside Third If...\n");
		aChar = 'T';
	}
	printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);//20 T
}
