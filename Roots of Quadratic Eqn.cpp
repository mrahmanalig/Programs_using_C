#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c, d, r1, r2;
	printf("Enter coefficient of a quadratic equation: ");
	scanf("%f %f %f", &a, &b, &c);
	d=b*b-4*a*c;
	
	if(d==0){
		r1=(-b)/(2*a);
		printf("Roots are real and equal: %f", r1);
	}
	else if(d>0) {
		r1=(-b+sqrt (d))/(2*a);
		r2=(-b-sqrt (d))/(2*a);
		printf("Roots are real an distinct: %f, %f", r1, r2);
	}
	else if(d<0)
	{
	r1=(-b+sqrt (d))/(2*a);
	r2=(-b-sqrt (d))/(2*a);	
		printf("Roots are imaginary %f, %f", r1, r2);
}
	return 0;
}
