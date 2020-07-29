#include<stdio.h>

void main() {
	int a,b,c;
	printf("Number One:");
	scanf("%d",&a);
	printf("Number Two:");
	scanf("%d",&b);
	printf("Number Three:");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("%d is largest\n",a);
		if(a%2 == 0 )
			printf("%d is even\n",a);
		else
			printf("%d is odd\n",a);
	}else if(b>a && b>c){
		printf("%d is largest\n",b);
		if(b%2 == 0 )
			printf("%d is even\n",b);
		else
			printf("%d is odd\n",b);
	}else{
		printf("%d is largest\n",c);
		if(c%2 == 0 )
			printf("%d is even\n",c);
		else
			printf("%d is odd\n",c);	
	}
}
