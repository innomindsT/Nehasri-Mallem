//to find the factorial of the number
#include<stdio.h>
int main() {
	int num,fact=1;
	printf("enter the number :");
	scanf("%d",&num);
	for(int i=1;i<=num ;i++)
	{
		fact*=i;
	}
	printf("the factrial of the given number %d is %d",num,fact);
	
	return 0;
}
