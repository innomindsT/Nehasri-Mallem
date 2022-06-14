//To check whether given number is Amstrong  or not
#include<stdio.h>
int main()
{
	int sum,am,num,y;
	printf("Enter the number to check amstrong or not :");
	scanf("%d",&num);
	am=num;
	sum=0;
	while(num>0)
	{	y=num%10;
		sum=sum+(y*y*y);
		num/=10;
	}
	if (am==sum)
	{
		printf("The given number %d is Anstrong number \n",am);
	}
	else
	{
		printf("The given number %d is not Anstrong number \n",am);
	}
	return 0;
}
	
