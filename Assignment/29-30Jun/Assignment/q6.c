#include<stdio.h>

void main(){
	int subVal=15;
	if(subVal++ && subVal--){	//true
		printf("SubVal : %d\n",subVal);	//15
	}
	if(subVal-- || ++subVal){	//true
		printf("SubVal : %d\n",subVal);	//14
	}
	if(subVal > subVal);{	//false but the statement in if is null statement so the block after if will be executed
		printf("SubVal : %d\n",subVal);	//14
	}
}
/*
	subVal++ && subVal--	//subVal=15
	15 && subVal--		//subVal=16
	true && 16		//subVal=15
	true && true
      =>true

      	subVal-- || ++subVal	//subVal=15
	15 || ++subVal		//subVal=14
	true || ++subVal	//subVal=14
      =>true

	


*/
