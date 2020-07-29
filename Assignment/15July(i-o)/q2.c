#include<stdio.h>

void main(){
	
	char ch;
	printf("Enetr char:");
	scanf("%c",&ch);
	if(ch >= 'a' && ch<='z'){
		printf("%c is a lower case\n",ch);
	}else if(ch>='A' && ch<='Z'){
		printf("%c is a upper case\n",ch);
	}else{
		printf("%c is a special character\n",ch);
	}
}
