#include<stdio.h>

void main(){
	int a = 10,ans = 0;
	ans = a<<3;	//Left shift operator
	printf("%d\n",ans);
	ans = a>>2;	//Right shift operator
	printf("%d\n",ans);
}
/*
	1010<<3 --> 1010000 --> 80
	1010>>2 --> 0010 --> 2
*/
