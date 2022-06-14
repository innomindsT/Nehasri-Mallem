//To print the flip of bits
#include<stdio.h>
long flip(int);
long bits(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	flip(num);
	return 0;
}
long flip(int n)
{
	long x=bits(n);
	printf("The binary format of the integer is %ld\n",x);
	long sum=0,y;
	while (x>0)
	{
		y=x%10;
		sum=(sum*10)+y;
		x/=10;
	}
	printf("The reverse of te binary format is %ld\n",sum);



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

