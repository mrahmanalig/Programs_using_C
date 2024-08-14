#include <stdio.h>
int main(){
	int initial, final;
	printf("Enter initial and final number to print prime number between them: ");
	scanf("%d %d", &initial, &final);
	int i;
	if(initial<0 || final<0) {
		printf("Invalid ranges ");
	}
	else
	
	for (i=initial;i<=final;i++) {
		int count=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
			
		}
		if (count==0){
			printf("%d ", i);
		}
	}

		
	return 0;
}
