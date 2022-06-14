//To convert decimal number to octal number
#include<stdio.h>
long convert(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("The octal number of %d is %ld\n",num,convert(num));
	return 0;
}
long convert(int n)
{
	int sum=0;
	long rem;
	while (n>0)
	{
		rem=n%8;
		sum=sum+(rem*i);
		i=i*10;
		n/=10;
