 #include<stdio.h>
 int main(){
	int n, val;
	printf("Enter siie of an array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements for the array: ");
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

  printf("\nEnter the value you want to search: ");
	scanf("%d", &val);
	for(int i=0;i<n;i++){
		if(arr[i]==val)
		printf("The element is found: %d", val);
	
}
}
