#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	int arr[n];
	for ( i=0; i<n;i++){
		scanf("%d",&arr[i]);	
	}
	printf("Entered elements of an array:\n");
	for( i=0; i<n;i++){
		printf("%d   ",arr[i]);
	}
	
	int min, max;
	min=arr[0];
	for (i=0;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	
	printf("\nMinimum elements of an array: %d \n", min);
	max=arr[0];
	for (i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	
	printf("Maximum elements of an array: %d ", max);
}
