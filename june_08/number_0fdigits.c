//to print number of digits in a given number
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number :");
	scanf("%d",&num);
	while (num>0)
	{
		count++;
		num/=10;
	}
	printf("The number of digits in a give number is %d\n",count);
	return 0;
}
