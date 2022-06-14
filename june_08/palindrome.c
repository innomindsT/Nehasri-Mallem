//To check whether the given number is palindrome or not
#include<stdio.h>
int main()
{
	int num,rev,sum=0;
	printf("Enter the number :");
	scanf("%d",&num);
	rev=num;
	while (num>0)
	{
		sum=(sum*10)+(num%10);
		num/=10;
	}
	if (rev==sum)
	{
	printf("The given number %d is palindrome \n",rev);
	}
	else {
		printf("The given number %d is not palindrome \n",rev);
		}
	return 0;
}
