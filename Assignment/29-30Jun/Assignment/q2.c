#include<stdio.h>

void main() {
	int a=10,b=20;
	if((a && b++) && (a++ || ++b)){
		printf("a : %d\n",a);	//11
		printf("b : %d\n",b);	//21
	}
	printf("out of if\n");	//out of if
}
/*
	(a && b++)	//a=10 b=20
	(10 && 20)	//a=10 b=21
      =>(true && true)
      =>true

        (a++ || ++b)	//a=10 b=21
	(10 || ++b)	//a=11 b=21
	(true || ++b)	//a=11 b=21
      =>true

	(a&&b++) && (a++ || ++b)
      =>true && true
      =>true
So, the condition of if is true so the statements in if will get exectuted.
*/
