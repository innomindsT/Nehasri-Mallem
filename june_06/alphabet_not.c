//tot check whether a character is alphabet or not
#include<stdio.h>
int main() {
	char c;
	printf("Enter the character :");
	scanf("%c",&c);
	int d=c;
	if ((d >=65 && d<=90) || (d>=97 && d<=122)) 
		printf("Entered character is Alphabet\n");
	else
		printf("Entered character is not alphabet\n");
	return 0;
}
