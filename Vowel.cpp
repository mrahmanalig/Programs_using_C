#include<stdio.h>
int main(){
	char alphabet;
printf("Enter an alphabet: ");
scanf("%c", &alphabet);
if (alphabet=='a'|| alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O' ||alphabet=='U')
{
	printf("Entered alphabet is a vowel: %c", alphabet);
	
}
else {
printf("Entered aplhabet is a consonant: %c", alphabet);
}
return 0;
}
