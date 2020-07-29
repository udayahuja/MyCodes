#include <stdio.h>
int main(){

        int a;
        switch(a = (sizeof(int) > -1)){
		case 1: printf("True\n");
                        break;
                case 0: printf("False\n");
			break;
        }
        return 0;
}
/*
 *	sizeof(int) = 4
 *	4>1 => 1
 *	So the output will be 
 *
 *	True		//(Wrong ans)
 *
 *	ask why the ans is false??
 */
