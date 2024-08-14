#include<stdio.h>
int main(){
	int n, val, position;
	printf("Enter size of an array: ");
	scanf("%d", &n);
	int arr[n+1];
	printf("Enter the elements of an array: ");
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the value: ");
	scanf("%d", &val);
	printf("Enter the index of an array where you want to insert: ");
	scanf("%d", &position);
	
	for (int i=position;i<=n;i++){
		arr[i+1]=arr[i];
	}
	arr[position]=val;
	for (int i=0;i<=n;i++){
		printf("%d  ", arr[i]);
	}
}
