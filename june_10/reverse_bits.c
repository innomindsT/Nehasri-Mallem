//To reverse the bits of a integer
#include<stdio.h>
#include<math.h>
void reverse(int);
long bits(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	reverse(num);
	return 0;
}
void reverse(int n)
{
	long x=bits(n);
	int sum1=0,i;
	printf("The binary format of the integer is %ld\n",x);
	long sum=0,y;
	while (x>0)
	{
		y=x%10;
		sum=(sum*10)+y;
		x/=10;
	}
	printf("The reverse of te binary format is %ld\n",sum);
	i=0;
	while (sum>0)
	{
		y=sum%10;
		sum1=sum1+(y*pow(2,i));
		y/=10;
		i++;
		sum/=10;
	}
	printf("The reverse of the integer bits is %d\n",sum1);
}
long bits(int n)
{
	
	long sum=0;
	int i=1,y;
	while (n>0)
	{
		y=n%2;
		sum=sum+(y*i);
		i=i*10;
		n/=2;
	}
	return sum;
}

