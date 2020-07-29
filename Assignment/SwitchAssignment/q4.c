#include <stdio.h>
int main() {
	int x = 2;
	switch(x << (x + 1)) {
    	default:
        	printf("default\n");
    	case 1:
        	printf("1\n");
        	break;
    	case 2:
 	       	printf("2\n");
       		break;
    	case 3:
       		printf("3\n");
       		break;
    	case 4:
       	 	printf("4\n");
       		break;
    	case 8:
       	 	printf("8\n");
       		break;
	}
	return 0;
}
/*
 *	x<<(x+1)=>2 << (2+1)
 *		=>2<<3
 *		=>16
 *
 *	as there is no case 16 it will go in default and as there is no break after default case it will execute case 1 alse
 *	So the output will be
 *
 *	default
 *	1
 *
 */
