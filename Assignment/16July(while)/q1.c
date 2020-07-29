#include<stdio.h>

void main() {
	
	int n,sum=0,mult=1;
	printf("Enter num:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%2 == 0)
			sum+=i;
		else mult *= i;
	}
	printf("The sum is:%d\n",sum);
	printf("The multiplication is:%d\n",mult);
}
