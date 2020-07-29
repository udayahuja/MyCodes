#include<stdio.h>
#include<stdbool.h>
void main() {
	bool val=false, var=true;
	if(val);{	//val is false so the if statement will not get executed but there is null statement after if that will be skipped but the block of printf("true") will get executed.
		printf("true\n");	//true
	}
	if(var){ //var is true so if will get executed.
		printf("false\n");
	}
}
