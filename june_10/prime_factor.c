//To print the prime factors of the given number
#include<stdio.h>
int main()
{
	int n;
	int i,j,count;
	printf("Enter the number :");
	scanf("%d",&n);
	i=2;
	//printf("hello world\n");
	while (n>0 && i<=n)
	{	//printf("entering into while loop\n");
		count=0;
		//printf("entering into for loop\n");
		for (j=1;j<i;j++)
		{
			
			/* add comment*/
			if(i%j==0)
			{
				count++;
				
			}
		}
		//printf("exiting for loop\n");
		if (count ==1)
		{	//printf("Enter th first if\n");
			//printf("%d \n%d",n,i);
			if (n%i==0)
			{	//printf("enter the second if\n");
				printf("%d ",i);
				n=n/i;
			}
			else
			{	//printf("entering first else\n");
				i=i+1;
			}
		}
		else 
		{	//printf("entering second else\n");
			i=i+1;
		}
	//printf("exiting while loop\n");
	}
	return 0;
}

