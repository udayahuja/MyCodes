
#include<stdio.h>

void main(){
	int ilc=15, olc= 25;
	
	if(olc >ilc){	//25 > 15 => true
		printf("olc : %d\n",olc);	//olc:25
	}
	
	if(ilc<olc);{	//15 < 25 => true but as there is ';' which implies there is null statement after if so there will be no output for if but the statements in the block after if will gwt executed
		printf("ilc : %d\n",ilc);	//ilc:15
	}
	
	printf("olc : %d\n",olc); 	//olc:25
	printf("ilc : %d\n",ilc);	//ilc:15
}
