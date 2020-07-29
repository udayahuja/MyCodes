#include<stdio.h>

void main(){
	int number=10;
	if(number!=0 && number>0){	//true && true=>true
		printf("%d is a positive no\n",number);
		number=-5;
	}
	//number=-5
	if(number<0 ){	//-5<0 => true
		printf("%d is a negtive no\n",number);
		number=0;
	}
	//number=0
	if(number==0){ //0==0=> true
		printf("number is zero\n");
		number=15;
	}
	//number=15
	if(number%4==0);{	//15%4==0 => false but there is null statement ater if so the block will get executed after if
		printf("%d is divisible by 4\n",number);
	}
}
