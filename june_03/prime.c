//to print the prime numbers of the given number
#include<stdio.h>
int main() {
	int num,count=0;
	printf("Enter the number :");
	scanf("%d",&num);
	for (int i=1;i<num;i++) {
		if (num%i==0)
			count++;
		}
	if (count<2)
		printf("The number is prime number\n");
	else
		printf("The number is not prime number\n");
	return 0;
}
