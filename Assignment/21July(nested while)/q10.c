
#include<stdio.h>

void main(){
	
	int lower,upper;
	printf("Enter lower and upper bound:");
	scanf("%d %d",&lower,&upper);
	int seive[upper+1];
	for(int i=0; i<upper+1;i++)
		seive[i]=0;
	for(int i=2;i<upper+1;i++){
		if(seive[i]==0){
			int j=2;
			while(i*j < upper+1){
				seive[i*j]=1;
				j++;
			}
		}
	}
	//for(int i=0; i<upper+1;i++)
	//	printf("%d",seive[i]);
	for(int i=lower;i<=upper;i++){
		if(seive[i]==0)
			printf("%d ",i);
	}
	printf("\n");
}
