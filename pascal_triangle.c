//To print pascal triangle
#include<stdio.h>
int main()
{
	int arr[100],arr1[100];
	int num;
	arr[1]=arr1[1]=1;
	printf("Enter the number of lines of pascal triangle :");
	scanf("%d",&num);
	for (int i=1;i<=num;i++)		//loop for number of lines of pascal triangle
	{
		for (int j=1;j<=i;j++)		//starting the loop for logic to each line
		{
			if (j==1 || j==i)	//Declaring the 0th and ith place of each line equals to 1
			{
				arr1[j]=1;
				printf("%d ",arr1[j]);
			}
			else			//Calculating the sum of two elements of the above line
			{
				arr1[j]=arr[j-1]+arr[j];
				printf("%d ",arr1[j]);
			}
		}
		for(int j=1;j<=i;j++)
		{
			arr[j]=arr1[j];
		}
		printf("\n");
	}
	return 0;
}
