#include<stdio.h>
#define PI 3.14f
void main() {
	
	float r;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("The Area of circle is: %f\n",(PI * r * r));
	printf("Circumference Of circle is: %f\n",(2*PI*r));
}
