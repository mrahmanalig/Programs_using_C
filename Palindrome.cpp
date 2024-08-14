
// To check an entered number is palindrome or not

#include<stdio.h>
int main() {
	int num, reverse=0, remainder, original;
	printf("Enter a number to check for a palindrome: ");
	scanf("%d", &num);
	original=num;
	while (num!=0){
		remainder= num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	if(original==reverse)
	printf("Entered number i.e %d is palindrome \n", original);
	else
	printf("Entered number is not a palindrome ", original);
	
	return 0;
}
