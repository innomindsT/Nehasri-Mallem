//printing the prime factors of the given number
#include<stdio.h>
int main() 
{
	int num,count;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("The prime factors of the number :");
	for (int i=2;i<num;i++)
	{	count=0;
		if (num%i==0)
		{
			for (int j=1;j<i;j++)
			{
				if (i%j==0)
				{
					count++;
				}
			}
			if (count==1)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
