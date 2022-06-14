//To find whether given number is even or odd
#include<stdio.h>
int main() {
	int a;
	printf("Enter the number ");
	scanf("%d:,&a);
	if (a%2==0)
		printf("The given number %a is even\n",a);
	else 
		printf("The given number is is odd\n",a);
	return 0;
}
