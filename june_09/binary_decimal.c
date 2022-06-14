//To convert the binary number into decimal and decimal to binary
#include<stdio.h>
#include<math.h>
int convert(long long);
int main()
{
	long long num;
	printf("Enter the binary number :");
	scanf("%lld",&num);
	printf("The decimal number of given binary number is %d\n",convert(num));
	return 0;
}
int convert(long long n)
{
	int i=0,sum=0,rem;
	while (n>0)
	{
		rem=n%10;
		sum=sum+rem*(pow(2,i));
		i++;
		n/=10;
	}
	return sum;
}
