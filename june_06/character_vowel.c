//To find whether the given character is vowel or consonant
#include<stdio.h>
int main() {
	char c;
	int lower,upper;
	printf("Enter the character :");
	scanf("%c",&c);
	lower=(c=='a' || c== 'e' || c=='i'|| c=='o' || c=='u');
	upper=(c=='A' || c== 'E' || c=='I'|| c=='O' || c=='U');
	if (lower || upper)
		printf("The given character is Vowel\n");
	else
		printf("The given character is Consonant\n");
	return 0;
}
