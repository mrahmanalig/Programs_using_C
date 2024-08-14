#include<stdio.h>
int main() {
	int year;
	printf("Enter a year to check for a leap year: ");
	scanf("%d", &year);
	if (year%400==0){
		printf("Entered year is a Leap Year:  %d", year);
	}
	else if (year%100==0){
		printf("Entered is not a leap year: %d", year);
	}
	else if(year%4==0){
		printf("Entered year is a leap year: ", year);
	}
	else 
	printf("Entered year is not a leap year: ", year);
	
	
	return 0;
}
