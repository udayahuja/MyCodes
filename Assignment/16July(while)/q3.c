#include<stdio.h>

void main() {
	
	for(int farh=0; farh<=100;farh++){
		float cel = (farh-32)*(5/9);
		printf("%d farehnite is %.3f celcius\n",farh,cel);
	}
}
