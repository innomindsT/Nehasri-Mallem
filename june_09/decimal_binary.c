//To convert decimal number to binary number
#include<stdio.h>
long long convert(int);
int main()
{
	int num;
	printf("Enter the binary number :");
	scanf("%d",&num);
	printf("The binary number of %d is %lld",num,convert(num));
	return 0;
}
long long convert(int n)
{
	long long sum=0;
	int div,i=1;
	while(n>0)
	{
		div=n%2;
		sum=sum+(div*i);
		i=i*10;
		n/=2;
	}
	return sum;
}
