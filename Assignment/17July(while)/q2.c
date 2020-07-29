#include<stdio.h>

void main() {
	char lower,upper;
	printf("Enter lower and upper bound:");
	scanf("%c %c",&lower,&upper);
	
	while(lower <= upper){
		switch(lower){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("%c is a vowel\n",lower);
				break;
			default:
				printf("%c is a consonent\n",lower);
				break;
		}
		lower++;
	}
}
