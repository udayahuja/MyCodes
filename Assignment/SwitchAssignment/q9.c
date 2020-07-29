#include<stdio.h>

void main() {
	
	int month;
	printf("Enter the month:");
	scanf("%d",&month);

	switch(month){
		case 1:
			printf("Jan has 31 days");
			break;
		
		case 2:
			printf("Feb has 28-29 days");
			break;

		case 3:
			printf("Mar has 31 days");
			break;

		case 4:
			printf("Apr has 30 days");
			break;

		case 5:
			printf("May has 31 days");
			break;

		case 6:
			printf("June has 30 days\n");
			break;

		case 7:
			printf("July has 31 days\n");
			break;

		case 8:
			printf("Aug has 31 days\n");
			break;

		case 9:
			printf("Sept has 30 days\n");
			break;

		case 10:
			printf("Oct has 31 days\n");
			break;

		case 11:
			printf("Nov has 30 days\n");
			break;

		case 12:
			printf("Dec has 31 days\n");
			break;

		default:
			printf("The month cannot be above 12\n");
			break;

	}
}
