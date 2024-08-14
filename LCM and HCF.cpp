#include<stdio.h>
#include<math.h>
int main(){
	int num1, num2, HCF, LCM;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	int max;
	if (num1>num2) max=num1;
	else max=num2;
	for (int i=max;i>=1;i--){
		if(num1%i==0 && num2%i==0){
			HCF=i;
			break;
		}
	}
	LCM=(num1*num2)/HCF;
    printf("HCF of both number is: %d \n", HCF);
	printf("LCM of both number is: %d \n", LCM);
}
