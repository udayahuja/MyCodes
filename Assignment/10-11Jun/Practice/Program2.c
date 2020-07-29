#include<stdio.h>

void main() {
	int x=10,y=15,ans=0;
	ans = x | y;	//Bitwise or
	printf("%d\n",ans);
	ans = x || y;	//logical or
	printf("%d\n",ans);
}
/*
	10 | 15 --> 1010 | 1111 --> 1111 --> 15
	10 || 15 --> 1 || 15(this is not checked bcoz the first value is truw) --> 1	
*/
