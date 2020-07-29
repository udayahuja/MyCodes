#include<stdio.h>

void main() {

	int x=15,y=19,ans=0;

	ans = x&y;
	printf("%d\n",ans);
	
	x=7;y=21;
	ans = x|y;
	printf("%d\n",ans);

	x=65;y=29;
	ans = x&y;
	printf("%d\n",ans);
	
	x=10;
	ans = x<<4;
	printf("%d\n",ans);
	
	x=53;y=19;
	ans = x&y;
	printf("%d\n",ans);
	
	x=23;y=7;
	ans = x|y;
	printf("%d\n",ans);
	
	x=58;
	ans = x<<3;
	printf("%d\n",ans);
	
	x=45;y=33;
	ans = x|y;
	printf("%d\n",ans);
	
	x=95;
	ans = x<<2;
	printf("%d\n",ans);
	
	x=18;
	ans = x<<5;
	printf("%d\n",ans);
}
