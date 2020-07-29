#include<stdio.h>

void main() {
	
	int x=10,y=15,ans=0;
	ans = x&y;	//10	Bitwise and
	printf("%d\n",ans);
	ans = x&&y;	//1	logocal and
	printf("%d\n",ans);
}
/*
	10&15 --> 1010 & 1111 --> 1010
	10&15 --> 1 & 1 --> 1
*/
