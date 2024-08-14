#include<stdio.h>
#include<math.h>
int main(){
	float p, r, amount, ci, si, t;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time annually: ");
    scanf("%f", &t);
    si= (p*r*t)/100;
    printf("The value of Simple interest is: %f \n",si);
    amount= p*(pow(1+(r/100.0),t));
    printf("The amount is: %f\n", amount);
    ci=amount-p;
    printf("The compound interest: %f\n", ci);
    
    return 0;
       
	}
