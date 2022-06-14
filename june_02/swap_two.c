//Swaping the given two numbers
#include<stdio.h>
int main() {
	int a=10;
	int b=20;
	printf("The given a and b numbers are %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the values of a and b after swapping are %d and %d\n",a,b);
	return 0;
}
