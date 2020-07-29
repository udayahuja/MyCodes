#include<stdio.h>

void main(){
	char ch = '$';
	if(ch >= 'a' && ch <= 'z')
		printf("%c is a lower case charecter\n",ch);
	else if(ch>='A' && ch<='Z')
		printf("%c is an upper case charecter\n",ch);
	else 
		printf("%c is a special charecter\n",ch);
}
