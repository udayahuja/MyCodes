#include<stdio.h>

int main(){

    float a = 5.2;
    
    switch((int)a){	//(int)5.2 => 5
    
   	 case 1:
   			 printf("one\n");
   			 break;
   	 
   	 case 5:
   			 printf("five\n");	//five
   			 break;
   			 
   	 case 2:
   			 printf("two\n");
   			 break;
   			 
   	 default:
   	 
   			 printf("else\n");
   			 break;
    
    }
}
