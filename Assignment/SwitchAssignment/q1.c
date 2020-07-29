#include <stdio.h>
void main() {
      int a = 20;
     
      switch(~a) {
        case 20:
                printf("Case 20\n");
                printf("a= %d\n",a);
                break;
        case -20:
               printf("Case -20\n");
               printf("a= %d\n",a);
               break;
        case -21:
               printf("case -21\n");
               printf("a= %d\n",a);
               break;
        default:
              printf("Default\n");
              break;
	}

}
/*
 * 	~20 = ~(00000000 00000000 00000000 00010100)
 * 	    => (11111111 11111111 11111111 11101011)
 * 	    =>As the 32th bit is negative this no is negative
 * 	    =>Hence we have to take 2's compliment of this number
 * 	    =>2'compliment is -21
 *
 * 	    So output will be
 * 	    case -21
 * 	    a=-21
 */
